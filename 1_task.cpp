#include<iostream>
using namespace std;
int main()
{
    int size=0;
    cout<<"Enter the array size::";
    cin>>size;
    int arr[size]={};
    for(int value=0; value<size; value++)
    {
        cout<<"Enter the value of an array no "<<value+1<<" :: ";
        cin>>arr[value];
    }
    for(int i=0;i<size; i++)
    {
        cout<<"The value of arr["<<i<<"] is::"<<arr[i]<<endl;
    }
}