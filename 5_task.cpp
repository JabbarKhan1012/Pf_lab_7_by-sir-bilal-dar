#include<iostream>
using namespace std;
int main()
{
    int positive=0;
    int negative=0;
    int odd=0;
    int even=0;
    int zero=0;
    int arr[10]={};
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the "<<i+1<<" integers::";
        cin>>arr[i];
        if(arr[i]>0)
        {
            positive+=1;
        }
        else if (arr[i]<0)
        {
            negative+=1;
        }
       
        else
        zero+=1;
        if (arr[i]%2==0)
        {
            even+=1;
        }
        else 
        {
            odd+=1;
        }
    }
    cout<<"the number of positive integers is::"<<positive<<endl;
    cout<<"the number of negative integers is::"<<negative<<endl;
    cout<<"the number of odd integers is::"<<odd<<endl;
    cout<<"the number of even integers is::"<<even<<endl;
    cout<<"the number of zero integers is::"<<zero<<endl;

}