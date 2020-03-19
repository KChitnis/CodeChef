#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(0 <= n && n <= 100000)
        cout<<n<<endl;
    else
        cout<<"Constraints do not match ( 0 <= n <= 10^5)"<<endl;
    return 0;
}