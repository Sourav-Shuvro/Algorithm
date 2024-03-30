#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,m;
    cout<<"Size1: ";
    cin>>n;
    cout<<"Size2: ";
    cin>>m;
    int a[n],b[m],c[n+m],i,j,k=0,l;
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
            c[k]=a[j];j++;
        }
        else
        {
            c[k]=b[l];l++;
        }
        k++;
    }
    while(j<n)
    {
        c[k]=a[j];j++;k++;
    }
    while(l<m)
    {
        c[k]=b[l];l++;k++;
    }
    for(i=0; i<n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
