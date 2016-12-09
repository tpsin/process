package threadPackage;

class MyThread extends Thread {

	public void run() {
		for(int c = 0; c < 10; c++) {
			System.out.println(Thread.currentThread().getId() + " Value " + c);
		}
	}

}

public class ThreadClass {

	public static void main(String[] args) {

		MyThread myThread = new MyThread();
		myThread.start();

		MyThread myThread2 = new MyThread();
		myThread2.start();

	}

}
