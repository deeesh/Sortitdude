#include <iostream.h>
using namespace std;

int main()
{
    int number[10],i,a,b,c,d,t;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter number for cell "<<i<<endl;
        cin>>number[i];
    }
    cout<<endl<<"Thank You! The data entry is over."<<endl;
    cout<<"\a\a";
    for(int j=0; j<10; j++)
    {
        for(int k=0; k<9; k++)
        {
            if (number[k]>number[k+1])
            {
                a=number[k];
                number[k]=number[k+1];
                number[k+1]=a;
            }
        }
    }
    cout<<"The list in ascending order is ";
    cout<<endl;
    for(i=0;i<10;i++)
        cout<<number[i]<<"\t"<<endl;
}