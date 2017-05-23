package threadPackage;

class MyThread extends Thread {

	public void run() {
		for(int c = 0; c < 10; c++) {
			System.out.println(this.getName() + " Value " + c);
		}
		try {
			Thread.sleep(100);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}

public class ThreadClass {

	public static void main(String[] args) {

		MyThread myThread = new MyThread();
		myThread.setName("primo");
		myThread.start();

		MyThread myThread2 = new MyThread();
		myThread2.setName("second");
		myThread2.start();

	}

}
