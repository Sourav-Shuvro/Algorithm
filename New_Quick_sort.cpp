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
void print(int a[],int s)
{
	for(int i=0; i<s; i++)
	{
		cout<<a[i]<<" ";
	}
}
int main(void)
{
    int n,i;
    cout<<"Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for(i=0; i<n; i++)
    {
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	print(a,n);
    return 0;
}
