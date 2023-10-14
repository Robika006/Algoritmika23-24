#include <iostream>
//#include <time.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int szam1=0,szam2=0;
    int b=0;
    clock_t start,stop;
    cin>>szam1>>szam2;
    clock_t start_time = clock();
    for(int i=0; i<100000001; i++){
        szam1+=szam2;
        szam2=szam1-szam2;
        szam1-=szam2;
    }
    clock_t end_time1 = clock();
    clock_t result = end_time1 - start_time;
    cerr<<result<<endl;
    clock_t start_time1 = clock();
    for(int i=0; i<100000001; i++){
        b=szam1;
        szam1=szam2;
        szam2=b;
    }
    clock_t end_time2 = clock();
    clock_t result1 = end_time2 - start_time1;
    cerr<<result1<<endl;
    clock_t start_time2 = clock();
    for(int i=0; i<100000001; i++){
        swap(szam1,szam2);
    }
    clock_t end_time3 = clock();
    clock_t result2 = end_time3 - start_time2;
    cerr<<result2<<endl;
    clock_t result4 =end_time3 - start_time;
    cerr<<result4<<endl;
    cout<<szam1<<" "<<szam2;

    return 0;
}
