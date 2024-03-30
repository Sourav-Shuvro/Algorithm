#include<bits/stdc++.h>
using namespace std;
#define t 10
double f(double x)
{
    return x*x*x-2*x-5;
}
void false_pst(double a,double b)
{
    if(f(a)*f(b)>=0)
    {
        cout<<"Incorrect assumption";
        return;
    }
    int i;
    double c;
    c=a;
    for(i=1; i<=t; i++)
    {
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        if(f(c)==0)
        {
            break;
        }
        else if(f(c)*f(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    cout<<"Root="<<c;
}
int main(void)
{
    double a,b;
    cin>>a>>b;
    false_pst(a,b);
    return 0;
}
