#include <iostream>
using namespace std;
#include <iomanip>

class Account
{
    public:

    Account(int balanc)
    {
        setBalance( balanc );
    }

    void setBalance( int balanc )
    {
        if (balanc>0)
        {
            accountBalanc=balanc;
        } else
        accountBalanc=0;
    }


    int getBalance()
    {   
        
        return accountBalanc;
        
    }

    int credit(int credit)
    {
        accountBalanc=accountBalanc + credit;
        return accountBalanc;
    }

    int debit(int debit)
    {   
        if(debit<=accountBalanc)
        {
            accountBalanc=accountBalanc - debit;
            return accountBalanc;
        }
        return accountBalanc;
    }

    private:

    int accountBalanc;

};

int main()
{
    Account Balanc1 (1000);
    Account Balanc2 (2200);

    cout << Balanc1. getBalance() << endl;
    cout << Balanc2. getBalance();

    cout << Balanc1. debit(15000) << endl;
    cout << Balanc2. debit(1500);

    

}