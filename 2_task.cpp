#include<iostream>
using namespace std;
int main()
{
    int study_hours=0,Max_study_hours;
    int max_hours;
    int arr[10]={};
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the study hours of sudent no"<<i+1<<" ::";
        cin>>arr[i];

        if(arr[i]>max_hours)
        {
            max_hours=arr[i];
            Max_study_hours=i+1;
        }
    }
    cout<<endl;
    for(int j=0; j<10; j++)
    {
        cout<<"The study hour fo student no "<<j+1<<" is::"<<arr[j]<<endl;
    }
    cout<<endl;
    cout<<"The student who studied the most is student no "<<Max_study_hours<<" and has studied "<<max_hours<<"hours"<<endl;
}