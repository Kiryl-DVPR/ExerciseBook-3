#include <iostream>
using namespace std;
#include <iomanip>

class Account
{
    public:

    Account(int balanc) // Определяем конструктор
    {
        setBalance( balanc );
    }

    void setBalance( int balanc ) // Функция для установки баланса
    {
        if (balanc>0)
        {
            accountBalanc=balanc;
        } else
            accountBalanc=0;
    }


    int getBalance() // Функция для получения баланса
    {   
        
        return accountBalanc;
        
    }

    int credit(int credit) // Функция добовляет деньги на счёт
    {
        accountBalanc=accountBalanc + credit;
        return accountBalanc;
    }

    int debit(int debit) // Функция снимает деньги со счёта
    {   
        if(debit<=accountBalanc)
        {
            accountBalanc=accountBalanc - debit;
            return accountBalanc;
        } else 
        {
            cout << "Error!!!The debit increases the balance!!!" << endl;
            return accountBalanc;
        };
        
    }

    private:

    int accountBalanc;

};

int main()
{
    int balanc1;
    int debit1;
    int credit1;

        cout << "Enter current balance 1: ";
        cin >> balanc1;

        Account Balanc1 (balanc1);

    cout << "Enter debit: ";
    cin >> debit1;
    Balanc1. debit(debit1);
    cout << "Enter credit: ";
    cin >> credit1;
    cout << "Current balance: " << Balanc1. credit(credit1) << endl;

    int balanc2;
    int debit2;
    int credit2;

        cout << endl << "Enter current balance 2: ";
        cin >> balanc2;

        Account Balanc2 (balanc2);

    cout << "Enter debit: ";
    cin >> debit2;
    Balanc2. debit(debit2);
    cout << "Enter credit: ";
    cin >> credit2;
    cout << "Current balance: " << Balanc2. credit(credit2);
}