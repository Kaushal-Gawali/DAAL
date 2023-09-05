#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,i,count=0;
    cout<<"\n Enter the size of array=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mid=0,high=n-1,low=0,temp;
        while (high>=low)
        {
            mid=(low+high)/2;
            if(arr[mid]==0)
            {
                high=mid-1;
            }
            else if (arr[mid]==1)
            {
                low=mid+1;
            }
            if(arr[mid]==0 && arr[mid-1]==1)
            {
                temp=mid;
            } 
        }
        count=n-temp;
    cout<<"number of zeros="<<count;
}
