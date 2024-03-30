#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

class item
{
public:
    double w,p,v;
};
bool cmp(item a,item b)
{
    return a.v<b.v;
}
int main()
{
    item t[1000];
    double j,k,l,h,W,s=0,a,b;
    int i,n;
    cin>>W;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t[i].w>>t[i].p;
        t[i].v=t[i].p/t[i].w;
        //cout<<"         "<<t[i].v<<endl;
    }
    sort(t,t+n,cmp);
    for(i=0;i<n;i++)
    {
        cout<<t[i].w<<" "<<t[i].p<<" "<<t[i].v<<endl;
    }
    j=1,i=n-1,k=1;
    while(k<=W)
    {
        s+=t[i].v;
        j++;
        if(j>t[i].w)
        {
            j=1;
            i--;
        }
        k++;
        cout<<"Sum "<<s<<endl;
    }
    cout<<s<<endl;
}



