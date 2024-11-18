#include<iostream>
using namespace std;
int main()
{     // acendign order program
    int arr[5];
    int temp;
    int i,j;
    cout<<"enter elements for array :"<<"\n";
    for(int i=0;i<=4;i++)
    {
        cin>>arr[i] ;
    }
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
              if(arr[i]<arr[j])
              {
                  temp =arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
        }
    }
cout<<" elements for array :"<<"\n";
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i] ;
    }
}
