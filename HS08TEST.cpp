#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int transaction_amt;
    double account_bal;
    cin>>transaction_amt>>account_bal;
    if(transaction_amt<=0 || transaction_amt>2000 || account_bal<=0 || account_bal>2000)
    {
        cout<<"values out of constraints!";
    }
    else
    {
        if(transaction_amt>account_bal)
        {
            cout<<account_bal<<endl;
        }
        else if(transaction_amt%5!=0)
        {
            cout<<account_bal<<endl;
        }
        else
        {
            account_bal = (account_bal - transaction_amt) - 0.50;
            cout<<setprecision(3)<<account_bal<<endl;
        }
    }
    return 0;
}