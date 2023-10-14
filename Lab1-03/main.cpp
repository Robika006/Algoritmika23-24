#include <iostream>

using namespace std;

int main()
{
    ///freopen("a.in", "r", stdin);
    long long int szam1,szam2,szam3;
    cin>>szam1>>szam2>>szam3;
    for(int i=0; i<2;i++){
        if(szam1>szam2){
            szam1+=szam2;
            szam2=szam1-szam2;
            szam1-=szam2;
            if(szam2>szam3){
                szam2+=szam3;
                szam3=szam2-szam3;
                szam2-=szam3;
            }
        }
    }
    cout<<szam1<<" "<<szam2<<" "<<szam3;
    return 0;
}
