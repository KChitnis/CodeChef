#include<iostream>
#include<cmath>
using namespace std;

    int conversion(int a,int b)
    {
        int array[100];
        int matches;
        int sum = a + b;
        int size = trunc(log10(sum)) + 1;
        for(int j = size; j >= 0; j--)
        {
            array[j] = sum % 10;
            sum /= 10;
        }
        
        for(int j=0;j<=size;j++)
        {
            if(array[j] == 1)
            {
                matches = 2;
            }
            else if(array[j] == 2)
            {
                matches = 5;
            }
            else if(array[j] == 3)
            {
                matches = 5;
            }
            else if(array[j] == 4)
            {
                matches = 5;
            }
            
        }
    }

int main()
{
    int T,A,B;
    cin>>T;
    cin>>A>>B;
    cout<<"\nsize: "<<conversion(A,B);
    return 0;
}