#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ///freopen("a.in", "r", stdin);
    double a=0,b=0,c=0,ter=0,co=0;
    cin>>a>>b>>c;
    co=(a+b+c)/2;
    ter=co*(co-a)*(co-b)*(co-c);
    if(ter <0){
        ter*=-1;
    }
    ter=sqrt(ter);
    cout <<ter;
    return 0;
}
