#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int p;
    cout<<"Enter number of points\n";
    cin>>p;
    int x[p],y[p],t,d,a1,a2,b1,b2;
    float dis,min=999999;
    cout<<"Enter the values of x\n";
    for(d=1;d<=p;d++)
    {
        cin>>x[d];
    }
    cout<<"Enter the values of y\n";
    for(d=1;d<=p;d++)
    {
        cin>>y[d];
    }

   //printing distance
    for(t=1;t<=p;t++)
    {
        for(d=1;d<=4;d++)
        {
            if(d!=t)
            {
                dis=sqrt(pow(x[t]-x[d],2)+pow(y[t]-y[d],2));
                cout<<dis<<endl;
            }
        }
        cout<<"\n\n";
    }

    //finding minimum distance

    for(t=1;t<=p;t++)
    {
        for(d=1;d<=4;d++)
        {
            if(d!=t)
            {
                dis=sqrt(pow(x[t]-x[d],2)+pow(y[t]-y[d],2));

                if(dis<min)
                {
                    min=dis;
                    a1=x[t];b1=y[t];
                    a2=x[d];b2=y[d];
                }
            }
        }

    }

    cout<<"Minimum distance is : "<<min<<endl;
    cout<<"a("<<a1<<","<<b1<<")"<<endl;
    cout<<"b("<<a2<<","<<b2<<")"<<endl;
    return 0;

}

                                                                                                                                                            //Sal;30.05.2017;
