#include<iostream>
using namespace std;

void add(int a,int b){
    cout<<"Addition: " << (a+b);
}



void add(int a,float b){
    cout<<"Addition: " << (a+b);
}



void add(float a,int b){
    cout<<"Addition: " << (a+b);
}


void add(float a,float b){
    cout<<"Addition: " << (a+b);
}


int main(){
float a = 5.45;
int b = 3.14;   

add(a,b);

    return 0;
}