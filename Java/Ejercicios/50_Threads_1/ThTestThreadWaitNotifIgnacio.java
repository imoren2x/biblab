/**
 * Inter-Process Communication
 * Wait and Notify
 *
 * class Chat: Question and Answer
 * 
 * class T1
 *
 * class T2
 * 
 * ThTestThreadWaitNotify
 * 
 */

class Chat {
    boolean flag = false;

    public synchronized void Question(String msg) {
        try {
            System.out.println(msg);
            wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
    }

    public synchronized void Answer(String msg) {

			System.out.println(msg);
			notify();

    }
}

class T1 implements Runnable {
    Chat m;
    String[] s1 = { "Hi", "How are you ?", "I am also doing fine!" };

    public T1(Chat m1) {
        this.m = m1;
        new Thread(this, "Question").start();
    }

    public void run() {
        for (int i = 0; i < s1.length; i++) {
            m.Question(s1[i]);
        }
    }
}

class T2 implements Runnable {
    Chat m;
    String[] s2 = { "Hi", "I am good, what about you?", "Great!" };

    public T2(Chat m2) {
        this.m = m2;
        new Thread(this, "Answer").start();
    }

    public void run() {
        for (int i = 0; i < s2.length; i++) {
            m.Answer(s2[i]);
        }
    }
}

public class ThTestThreadWaitNotifIgnacio {
    public static void main(String[] args) {
        Chat m = new Chat();

		try {
			// Let the thread sleep for a while.
			new T1(m);
			Thread.sleep(50);
			new T2(m);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
    }
}