
#include<bits/stdc++.h>
using namespace std;
void print(int a[],int s);
void sw(int a[],int p,int q);
int part(int a[],int low,int high);
void quick_sort(int a[],int low,int high)
{
    if(low<high)
    {
        int pi=part(a,low,high);
        quick_sort(a,low,pi-1);
        quick_sort(a,pi+1,high);
    }
}

int part(int a[],int low,int high)
{
    int i,pivot=a[high];
    int j=low-1;
    for(i=low; i<high; i++)
    {
        if(a[i]<=pivot)
        {
            j++;
            sw(a,i,j);
        }
    }
    sw(a,j+1,high);
    return j+1;
}

void sw(int a[],int p,int q)
{
    int t;
    t=a[p];
    a[p]=a[q];
    a[q]=t;
}

int main(void)
{
    int n,i,j,p;
    cout<<"Size: ";
    cin>>n;
    int a[n],b[n],c[n];
    cout<<"Enter Elements: ";
    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
      {
          cin>>a[j];
      }
      quick_sort(a,0,n-1);
      b[i]=a[n-1]-a[0];
      quick_sort(b,0,n-1);
    }
    cout<<b[n-1];
    return 0;
}
