#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,m;
    cout<<"Size1: ";
    cin>>n;
    cout<<"Size2: ";
    cin>>m;
    int a[2*n+m],b[m],i,j,k=n,l;
    cout<<"Enter 1st array: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter 2nd array: ";
    for(i=0; i<m; i++)
    {
        cin>>b[i];
    }
    j=0;l=0;
    while(j<n && l<m)
    {
        if(a[j]<=b[l])
        {
            a[k++]=a[j++];
        }
        else
        {
            a[k++]=b[l++];
        }
    }
    while(j<n)
    {
        a[k++]=a[j++];
    }
    while(l<m)
    {
        a[k++]=b[l++];
    }
    for(i=k; i<n+m; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

