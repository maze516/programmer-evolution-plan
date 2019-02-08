package com.learningjava.thread;

public class ThreadDemo4 {

	public static void main(String[] args) {
		
		 System.out.println("Inside : " + Thread.currentThread().getName());

	        System.out.println("Creating Runnable...");
	        // ʹ��lambda���ʽ
	        Runnable runnable = () -> {
	        	System.out.println("Inside : " + Thread.currentThread().getName());
	        };

	        System.out.println("Creating Thread...");
	        Thread thread = new Thread(runnable);  // Thread(Runnable target) 

	        System.out.println("Starting Thread...");
	        thread.start();
	}

}
