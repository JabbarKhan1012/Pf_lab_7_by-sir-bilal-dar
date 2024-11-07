#include<iostream>
using namespace std;
int main()
{
    int arr[10]={};
    for(int i=0;i<10; i++)
    {
        cout<<"Enter the no::"<<i+1;
        cin>>arr[i];

    }
    for(int j=10; j>=0;j--)
    {
        cout<<"The number in reverse order is::";
        cout<<arr[j]<<endl;
    }
}
