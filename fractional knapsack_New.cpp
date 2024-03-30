#include<bits/stdc++.h>
using namespace std;
class item
{
public:
    double price,wt,t;
};
bool cmp(item a,item b)
    {
        double r1=a.price/a.wt;
        double r2=b.price/b.wt;
        return r1>r2;
    }
double fract(double w,item a[],int n)
{
    double sum=0,q=0,b[20],f=0;
    sort(a,a+n,cmp);    /// sorting per unit cost as descending order-->"sort(arr,arr+size,greater<int>())"[STL];
    for(int i=0; i<n; i++)
    {
        cout<<a[i].t<<" ";
       if(q+a[i].wt<=w)
       {
           sum+=a[i].price;
           q+=a[i].wt;
           b[i]=a[i].wt;
           f++;
       }
       else
       {
           w-=q;
           sum+=w*(a[i].price/a[i].wt);///(remaining weight) X (per unit cost)
           b[i]=w;
           f++;
           break;
       }
    };
    cout<<endl;
    for(int i=0; i<f; i++)
    {
        cout<<b[i]<<" ";
    }
    return sum;
}
int main(void)
{
    double w;
    int i,n,c;
    //cout<<"Enter test case: ";
    cin>>c;
    //cout<<"Enter total weight: ";
    //cout<<"Enter number of item: ";
    //cout<<"Enter weight & price:"<<endl;
    for(int j=0; j<c; j++)
    {
        cin>>n;
        item a[n];
        for(i=0; i<n; i++)
        {
            a[i].t=i+1;
            cin>>a[i].wt;
        }
        for(i=0; i<n; i++)
        {
            //a[i].t=i;
            cin>>a[i].price;
        }
        cin>>w;
        cout<<endl<<fract(w,a,n)<<endl;
        //cout<<endl<<sum;
    }
    return 0;
}
