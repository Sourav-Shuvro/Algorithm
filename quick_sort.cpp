#include<bits/stdc++.h>
using namespace std;
void input(int array[],int n);
int quicksort(int array[],int p,int r);
void partition(int array[],int p,int r);
void print(int array[],int n);
int main()
{
    int n,p,r;
    cout<<"Enter total number of elements\n";
    cin>>n;
    int array[n];
    p=0;
    r=n-1;
    input(array,n);
    partition(array,p,r);
    print(array,n);
    return 0;
}
void input(int array[],int n)
{
    for(int t=0;t<n;t++)
    {
        cin>>array[t];
    }
}
void partition(int array[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=quicksort(array,p,r);
        partition(array,p,q-1);
        partition(array,q+1,r);
    }
}
int quicksort(int array[],int p,int r)
{
    int t,d,temp;
    for(t=p,d=p;t<r;t++)
    {
        if(array[r]>array[t])
        {
            temp=array[t];
            array[t]=array[d];
            array[d]=temp;
            d++;
        }
    }
    temp=array[r];
    array[r]=array[d];
    array[d]=temp;
    return d;
}
void print(int array[],int n)
{
    cout<<"Sorted array with quick sort is:\n\n";
    for(int t=0;t<n;t++)
    {
        cout<<array[t]<<"   ";
    }
}
                                                                                                                                                            //Sal;23.05.2017;
