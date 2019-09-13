#include <iostream>
#include <conio.h>

using namespace std;

class BankAccount
{
    private:
        double balance;
        long ID;
    public:
        BankAccount(long id, double bal)
        {
            ID= id;
            balance= bal;
        }
        void deposit(double val)
        {
            if (val> 0)
            {
                balance= balance+ val;
            }
        }
        void withdraw(double val)
        {
            if(val> 0 && balance> val)
            {
                balance= balance- val;
            }
        }
        void ShowDetails()
        {
            cout << "ID= " << ID << endl;
            cout << "Balance= " << balance << endl;
        }
};

int main()
{
    BankAccount ID1(1, 100000);
    BankAccount ID2(2,200000);

    ID1.ShowDetails();
    ID1.deposit(50000);
    ID1.ShowDetails();
    cout << "\n\n";
    ID2.ShowDetails();
    ID2.withdraw(100000);
    ID2.ShowDetails();

}
