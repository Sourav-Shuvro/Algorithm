#include<bits/stdc++.h>
using namespace std;
void mr(int a[],int p,int q,int r);
void merge(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        merge(a,p,q);
        merge(a,q+1,r);
        mr(a,p,q,r);
    }
}
void mr(int a[],int p,int q,int r)
{
    int i,j,k;
    int n1,n2;
    n1=q-p+1;
    n2=r-q;
    int L[n1],R[n2];
    for(i=0; i<n1; i++)
    {
        L[i]=a[p+i];
    }
    for(j=0; j<n2; j++)
    {
        L[j]=a[q+1+j];
    }
    i=0;j=0;k=p;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
        while(i<n1)
        {
            a[k]=L[i];i++;k++;
        }
        while(j<n2)
        {
            a[k]=R[j];j++;k++;
        }
}

void print(int a[],int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main(void)
{
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    merge(a,0,n-1);
    print(a,n);
    return 0;
}
