#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double a=0,b=0,c=0,del=0,x1=0,x2=0;
    cin>>a>>b>>c;
    del=b*b -(4*a*c);
    if(a==0){
        cerr <<"a=0 nincs masodfoku egyenletem ezert csak egy megoldas van";
    }
    if(del==0){
        cerr<<"nincs ket megoldas mert delta=0 es a ket megoldas eggyezik";
    }else if(del<0){
        cerr<<"nincs valos megoldas mert delta negativ";
    }else if(del>0 && a!=0){
        x1=((-b) +sqrt(del))/(2*a);
        x2=((-b) -sqrt(del))/(2*a);
        cout << x2<<" "<<x1;
    }
    return 0;
}
