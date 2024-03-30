#include<iostream>
using namespace std;


void input(int array[],int n);
void counting(int array[],int n,int max,int min);
void print(int array[],int n);


int main()
{
    int n,max=0,min=99999999,t;
    cout<<"Enter total number of elements\n";
    cin>>n;
    int array[n],a[n];
    input(array,n);

    for(t=1;t<=n;t++)
    {
        if(array[t]>max)
            max=array[t];
        if(array[t]<min)
            min=array[t];
    }

    counting(array,n,max,min);
    print(array,n);
    return 0;
}

void input(int array[],int n)
{
    for(int t=1;t<=n;t++)
    {
        cin>>array[t];
    }
}

void counting(int array[],int n,int max,int min)
{
    int box[10000],a[n],t,d=n;

    for(t=min;t<=max;t++)
    {
        box[t]=0;
    }

    for(t=1;t<=d;t++)
    {
        box[array[t]]+=1;
    }

    for(t=2;t<=max;t++)
    {
        box[t]+=box[t-1];
    }

    for(t=n;t>0;t--)
    {
        int count=array[t];
        int k=box[count];
        a[k]=array[t];
        box[count]-=1;
    }
    for(t=1;t<=n;t++)
    {
        array[t]=a[t];
    }
}

void print(int array[],int n)
{
    cout<<"Sorted array with counting sort is:\n\n";
    for(int t=1;t<=n;t++)
    {
        cout<<array[t]<<"   ";
    }
}
                                                                                                                                                            //Sal;04.04.2017;
