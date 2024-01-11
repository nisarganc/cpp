#include <iostream>
using namespace std;
class Bank
{
private:
                float amount;
public:
                void openAccount()
                {
                    amount = 250;
                }

                void deposit(float amt)
                {
                    if( amt >= 10000)
                        amt = amt - ( amt * 0.02 ) ; // 2% education tax
                    amount = amount + amt;
                }

                void withdraw( float amt )
                {
                    if ( amount - amt < 250 )
                        cout <<"Not enough balance" << endl;
                    else
                        amount = amount - amt;
                }

                void getBalance()
                {
                    cout << "Balance = " << amount << endl;
                }
};

int main()
{
    Bank sam , alan;
    sam.openAccount();
    alan.openAccount();
    sam.deposit(50000);

     sam.getBalance();
     alan.getBalance();

    return 0;
}



