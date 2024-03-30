#include<iostream>
using namespace std;

int main()
{
    int n,max=0;
    cout<<"Enter total number of elements\n";
    cin>>n;
    int array[n];
    int box[10],a[n],t,d=n;


    for(int t=0;t<n;t++)
    {
        cin>>array[t];
        if(array[t]>max)
            max=array[t];
    }

    int exp;
    for(exp=1;max/exp>0;exp=exp*10)
    {
        for(t=0;t<10;t++)
        {
            box[t]=0;
        }

        for(t=0;t<d;t++)
        {
            box[(array[t]/exp)%10]+=1;
        }

        for(t=1;t<10;t++)
        {
            box[t]+=box[t-1];
        }

        for(t=d-1;t>=0;t--)
        {
            int count=(array[t]/exp)%10;
            int k=box[count]-1;
            a[k]=array[t];
            box[count]-=1;
        }
        for(t=0;t<n;t++)
        {
            array[t]=a[t];
        }
    }

    cout<<"Sorted array with radix sort is:\n\n";
    for(int t=0;t<n;t++)
    {
        cout<<array[t]<<"   ";
    }
}

                                                                                                                                                                 //Sal;09.05.2017;

