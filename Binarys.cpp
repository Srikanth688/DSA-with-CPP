#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int flag=0;
    int m,f,l,s;
    int arr[5];
    cout<<"Enter The Elements:";
    while(i<5)
    {
        cin>>arr[i];
        i++;
    }
    l=5;
    f=0;
    cout<<"Enter The Search Elements:";
    cin>>s;
    while(f<=l)
    {
        m=(f+l)/2;
        if(s==arr[m])
        {
            cout<<"Element Found:";
            flag=1;
            break;
        }
        if(s>arr[m])
        {
            f=m+1;
        }
        if(s<arr[m])
        {
            l=m-1;
        }
        
    }
    if(flag==0)
    {
        cout<<"Element Not Found:";
    }
    return 0;
}





















