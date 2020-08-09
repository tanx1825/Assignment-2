#include<iostream>
#include<stdio.h>
using namespace std;

class account 
{
	private:
	int accountBalance;
	public:
	account(int balance) 
	{
		if (balance > 0)
		{
			accountBalance = balance;
		} 
		else 
		{
			cout<<"The initial balance was invalid";
			balance = 0;
			accountBalance = balance;
		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;
	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;
		} 
		else 
		{
			cout << "Debit amount exceeded account balance \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
	int openBalance;
	cout << "Enter the Amount \n";
	cin >> openBalance;
	account Account1(openBalance);
	int money;
	cout << "Enter the amount to Add \n";
	cin >> money;
	Account1.Credit(money);
	cout << Account1.getBalance() << "\n";
	double money1 ;
	cout << "Enter the amount to Subtract\n";
	cin >> money1;
	Balance.Debit(money1);
	cout << Account1.getBalance() << "\n";
	cout << "Enter the amount you want to start new account with? \n";
	cin >> openBalance;
	account Account2(openBalance);
	cout << "enter the amount you want to add in the new account? \n";
	cin >> money;
	Account2.Debit(money);
	cout << Account2.getBalance() << "\n";
	cout << "enter the amount you want to remove from new account? \n";
	cin >> money1;
	Account2.Debit(money1);
	cout << Account2.getBalance() << "\n";
	return 0;
}
