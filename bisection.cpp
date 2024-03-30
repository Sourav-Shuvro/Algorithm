#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x*x*x)-2*x-5;
}
void bis(double a,double b,double E)
{
    int i=0;
    if(f(a)*f(b)>=0)
    {
        cout<<"Ur assumption is not correct";
        return ;
    }
    double c=a;
    while((b-a)>=E)
    {
        c=(a+b)/2;
        if(f(c)==0.0)
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
        i++;
        cout<<i<<"."<<"Root: "<<c<<" & f(x)= "<<f(c)<<endl;
    }
    cout<<"At last, the real root: "<<c;
}
int main(void){
    double a,b,E;
    cout<<"Enter a & b: ";
    cin>>a>>b;
    cout<<"Enter Epsilon value: ";
    cin>>E;
    bis(a,b,E);
}
