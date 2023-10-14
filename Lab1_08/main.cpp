#include <iostream>

using namespace std;

int main()
{
    int ev1=0,ev2=0,evszamlalo=0;
    cin>>ev1>>ev2;
    for(int i=ev1; i<ev2+1; i++){
        if((i%4==0 && i%100 !=0 && i !=0)|| i%400==0){
            evszamlalo++;
            i++;
        }
    }
    cout <<evszamlalo;
    return 0;
}
