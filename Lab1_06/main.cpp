#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ///freopen("a.in", "r", stdin);
    double a=0,b=0,c=0,x=0,ter=0,r=0,R=0;
    cin>>a>>b>>c;
    if(c<(a+b) && b<(a+c) && a<(b+c)){
        x=(a+b+c)/2;
        ter=x*(x-a)*(x-b)*(x-c);
        ter=sqrt(ter);
        r=ter/x;
        R=a*b*c/(4*ter);
        cout <<r<<" "<<R;

    }else{
        cout <<-1;
    }
    return 0;
}
