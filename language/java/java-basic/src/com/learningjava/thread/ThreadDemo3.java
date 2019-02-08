package com.learningjava.thread;

public class ThreadDemo3 {

	public static void main(String[] args) {
		
		 System.out.println("Inside : " + Thread.currentThread().getName());

	        System.out.println("Creating Runnable...");
	        // ʹ�������ڲ��� ����һ��Runnable
	        Runnable runnable = new Runnable() {
				
				@Override
				public void run() {
					
					System.out.println("Inside : " + Thread.currentThread().getName());
				}
			};

	        System.out.println("Creating Thread...");
	        Thread thread = new Thread(runnable);  // Thread(Runnable target) 

	        System.out.println("Starting Thread...");
	        thread.start();
	}

}
