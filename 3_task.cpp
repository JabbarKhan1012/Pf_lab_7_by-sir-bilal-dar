#include<iostream>
using namespace std;
int main()
{
    int integers[7]={};
    for(int i=0;i<7;i++)
    {
        cout<<"Enter the "<<i+1<<" no::";
        cin>>integers[i];
    }
    for(int j=0;j<7;j++)
    {
        if(integers[j]%5==0)
        {
            cout<<"The number is divisible by 5"<<endl;
        }
        else
        cout<<"The number is not divisible by 5"<<endl;
    }
}