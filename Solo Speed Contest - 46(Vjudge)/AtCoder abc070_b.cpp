#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d; cin>>a>>b>>c>>d;

    if((min(a,b)>max(c,d))||(min(c,d)>max(a,b)))
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<min(b,d) - max(a,c)<<endl;
    }
}

