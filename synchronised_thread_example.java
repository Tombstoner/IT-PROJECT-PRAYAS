//change the name of file to "Bank.java" before compiling.
//Example of thread synchronisation

public class Bank extends Thread {
    static Double amount;
    
    static void setAmount(Double amnt) {
        amount = amnt;
    }
    
    static void getAmount() {
        System.out.println("Bank balance : " + amount);
    }
    
    static synchronized void depositAmnt(Double deposit) {
        amount += deposit;
        System.out.println("Amount deposited successfully.");
    }
    
    static synchronized void withdrawAmnt(Double withdraw) {
        if (amount < withdraw)
            System.out.println("Insufficient funds.");
        else {
            amount -= withdraw;
            System.out.println("Amount withdrawn successfully.");
        }
    }
    
	public static void main(String[] args) {
	    Thread t1 = new Thread() {
		    public void run() {
		        setAmount(5000.0);
		    }
		};
	    
		Thread t2 = new Thread() {
		    public void run() {
		        depositAmnt(200.0);
		    }
		};
		
		Thread t3 = new Thread() {
		    public void run() {
		        withdrawAmnt(5201.0);
		    }
		};
		
		Thread t4 = new Thread() {
		    public void run() {
		        getAmount();
		    }
		};
		
		t1.start();
		t2.start();
		t3.start();
		t4.start();
	}
}
