
public class BankAccount {
	private long ID;
	private double balance;
	public BankAccount(long ID, double balance)
	{
		this.ID= ID;
		this.balance= balance;
	}
	public void deposit(double value)
	{
		if (value> 0)
			balance= balance+ value;
	}
	public void withdraw(double value)
	{
		if (value >0 && balance>= value)
			balance= balance- value;
	}
	public void ShowDetails()
	{
		System.out.println("ID: "+ ID);
		System.out.println("Balance: "+ balance);
	}
public static void main(String args[])
{
	BankAccount ID1= new BankAccount(1,100000);
	BankAccount ID2= new BankAccount(2,200000);
	
	ID1.ShowDetails();
	ID1.deposit(2000000);
	ID1.ShowDetails();
	
	ID2.ShowDetails();
	ID2.withdraw(100000);
	ID2.ShowDetails();
}
}
