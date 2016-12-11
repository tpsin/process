package runnableInterfacePackage;

/**
 * 
 * @author antonio
 *
 * Runnable interface to create threads
 * 
 */

class MyRunnableClass implements Runnable {

	@Override
	public void run() {
		for(int c = 0; c < 10; c++) {
			System.out.println(Thread.currentThread().getId() + " Value " + c);
			try {
				Thread.sleep(100);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
}

public class RunnableClass {

	public static void main(String[] args) {
		
		Thread thread1 = new Thread(new MyRunnableClass());
		Thread thread2 = new Thread(new MyRunnableClass());

		thread1.start();
		thread2.start();

	}

}
