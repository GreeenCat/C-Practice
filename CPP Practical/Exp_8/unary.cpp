#include<iostream>
using namespace std;
class myopera{

public:
int a = 0;
int operator ++(){
    a++;
    cout<<a;
    return 0;
}

};

int main(){
    myopera o1;
        o1.a = 50;
        ++o1;   

    return 0;
}