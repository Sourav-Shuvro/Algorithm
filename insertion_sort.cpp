#include<iostream>
using namespace std;


void input(int array[],int n);
void insertion(int array[],int n);
void print(int array[],int n);


int main()
{
    int n;
    cout<<"Enter total number of elements\n";
    cin>>n;
    int array[n];
    input(array,n);
    insertion(array,n);
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

void insertion(int array[],int n)
{
    int fixed,t,d,b;
    b=n;
    for(t=2;t<=b;t++)
    {
        fixed=array[t];
        for(d=t-1;d>0&&array[d]>fixed;d--)
        {
            array[d+1]=array[d];
        }
        array[d+1]=fixed;
    }
}

void print(int array[],int n)
{
    cout<<"Sorted array with insertion sort is:\n\n";
    for(int t=1;t<=n;t++)
    {
        cout<<array[t]<<"   ";
    }
}

                                                                                                                                                                 //Sal;14.03.2017;
