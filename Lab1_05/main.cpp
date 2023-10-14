#include <iostream>

using namespace std;
double hatvany(int hatv, int szam){
    int alap =szam;
    while(hatv>1){
        szam*=alap;
        hatv--;
    }
    return szam;
}
double faktorial(int a){
    long long int j=1,fakt=1;
    while(a>0){
        fakt*=j;
        a--;
        j++;
    }
    return fakt;
}
int main()
{
    ///freopen("a.in", "r", stdin);
    double s=1;
    long long int x=0,n=0;
    cin>>n>>x;
    int k=0;
    for(int i=1; i<n+1; i++){
        if(i%2==1){
            k=-1;
        }else{
            k=1;
        }
        s+=(k*hatvany(2*i,x))/faktorial(2*i);
    }
    cout <<s;
    return 0;
}
