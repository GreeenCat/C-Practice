#include<iostream>
using namespace std;
class time{
int sec,hrs,min;

public:
time(int min1,int hrs1){
min = min1;
hrs = hrs1;
}

operator int(){

    return int(min+hrs*60);
}


};

int main(){
    int duration;
    time t1(60,1);
    duration = t1;
    cout<<duration;


    return 0;
}