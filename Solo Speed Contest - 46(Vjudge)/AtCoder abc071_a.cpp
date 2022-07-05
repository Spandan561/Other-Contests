#include<iostream>
using namespace std;

int main()
{
    int x,a,b,c; cin>>x>>a>>b;
       if(abs(a-x)<abs(b-x))
       {
           cout<<"A\n";
       }
       else
       {
           cout<<"B\n";
       }
       return 0;
}

