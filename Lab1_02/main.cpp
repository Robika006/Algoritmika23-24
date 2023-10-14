#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int szam=1000000000,i=1,a=0;
    cin>>szam;
    while(i*i <=szam){
        i++;
    }
    i=i-1;
    a=sqrt(szam);
    i=0;
    while(i<=a){
        i++;
    }
    i=i-1;
    ///Mivel az utolso felvett helyes ertek utan felviszi az i erteket 1-el
    cout <<i;
    return 0;
}
