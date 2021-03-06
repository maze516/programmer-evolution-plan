package com.my.rpc.runtime.runner;

import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.SocketAddress;
import java.nio.ByteBuffer;

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;
import com.my.rpc.runtime.exception.RPCExceptionBase;
import com.my.rpc.runtime.exception.RPCExceptionFactory;
import com.my.rpc.runtime.protocol.RPCRequest;
import com.my.rpc.runtime.protocol.RPCResponse;

public class RPCClientStub extends RPCStub
{
	private static Logger logger = LogManager.getLogger(RPCRequest.class);
	private InetAddress host;
	int port;
	
	public RPCClientStub(Class<?> cls, InetAddress host, int port)
	{
		super(cls);
		this.host = host;
		this.port = port;
	}
	/* (non-Javadoc)
	 * @see java.lang.Object#toString()
	 */
	@Override
	public String toString()
	{
		return "RPCClientStub [ key= " + getStubKey() + " host=" + host + ", port=" + port + "]";
	}
	/**
	 * @return the host
	 */
	public InetAddress getHost()
	{
		return host;
	}
	/**
	 * @param host the host to set
	 */
	public void setHost(InetAddress host)
	{
		this.host = host;
	}
	/**
	 * @return the port
	 */
	public int getPort()
	{
		return port;
	}
	/**
	 * @param port the port to set
	 */
	public void setPort(int port)
	{
		this.port = port;
	}
	
	protected RPCResponse call(RPCRequest request) throws RPCExceptionBase
	{
		try
		{
			 request.setRequestId(IDManager.genId());
			 request.setRequestTime(System.currentTimeMillis());
			 logger.info("RPCClientStub begin call request request=" + request.toString());
			 Socket s = new Socket();
			 s.setReuseAddress(true);
			 SocketAddress address = new InetSocketAddress("localhost", this.port);
			 logger.info(String.format("client connecting at %s", address));
			 s.connect(address); 
	         // obtaining input and out streams 
			 InputStream bis = s.getInputStream(); 
			 BufferedOutputStream bos = new BufferedOutputStream(s.getOutputStream()); 
			 ByteBuffer buffer = request.writeToByteBuffer();
	         bos.write(buffer.array());
	         bos.flush();
	         RPCResponse rpcResponse = new RPCResponse();
	         byte[] readBuffer = new byte[10 * 1024];
	         int num = -1;
	         while(num < 0)
	         {
	        	 num = bis.read(readBuffer);
	        	 if(num < 0)
	        	 {
	        		 continue;
	        	 }
		         ByteBuffer readBuff = ByteBuffer.allocate(num);
		         readBuff.put(readBuffer, 0, num);
		         rpcResponse.readFromByteBuffer(readBuff);
	         }
	         bos.close();
	         s.close();
	         if(rpcResponse.getException() != null)
	         {
	        	 throw rpcResponse.getException();
	         }
			 return rpcResponse;
		}
		catch (IOException e)
		{
			logger.error("RPCClientStub call  " + e.toString());
			throw RPCExceptionFactory.createException(RPCExceptionFactory.RPC_IO_Exception, " RPCClientStub call failed to read data.");
		}
		catch(NullPointerException e)
		{
			logger.error("RPCClientStub call   " + e.toString());
			throw RPCExceptionFactory.createException(RPCExceptionFactory.RPC_NullPointer_Exception, " RPCClientStub call null pointer.");
		}
		catch (RPCExceptionBase e) 
		{
			logger.error("RPCClientStub call   " + e.toString());
			throw e;
		}
		catch (Exception e) 
		{
			logger.error("RPCClientStub call   " + e.toString());
			throw RPCExceptionFactory.createException(RPCExceptionFactory.RPC_Unknown_Exception, "RPCClientStub call unknown exception.");
		}
	}
}
