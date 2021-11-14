#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
    ll n,temp;
    cout<<"enter the number of element present in array"<<endl;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}