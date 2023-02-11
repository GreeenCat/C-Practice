//Referance variable
#include<iostream>
using namespace std;

int swapping(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;


    return 0;
}
int main(){
int a=30;
int b = 40;
cout<<"Before swapping a= "<<a << "b= " <<b <<endl;
swapping(&a,&b);
cout<<"After Swapping: " <<endl;
cout<<"Before swapping a= "<<a << "b= " <<b <<endl;



    return 0;
}