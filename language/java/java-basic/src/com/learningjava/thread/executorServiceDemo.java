package com.learningjava.thread;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class executorServiceDemo {
	public static void main(String[] args) {
		
		System.out.println("Inside: " + Thread.currentThread().getName());
		
		System.out.println("Creating Executor Service...");
		
		ExecutorService service = Executors.newSingleThreadExecutor(); // ���쵥�̵߳��̳߳�
		
		System.out.println("Creating a runnable...");
		
		Runnable runnable = () -> {
			System.out.println("Inside : " + Thread.currentThread().getName());
		};
		
		System.out.println("Submit the task specified by the runnable to the executor service.");
		 
		service.submit(runnable); // �ύ����������
		
		System.out.println("Shutting down the executor");
		service.shutdown();  // ��Ҫ��ʽ���ùرղ�����ֹ�̳߳����߳�
	}
}
