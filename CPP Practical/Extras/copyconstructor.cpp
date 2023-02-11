#include<iostream>
using namespace std;
class constru{

int a,b;
public:
constru(){
   cout<<"Enter a number";
   cin>>a;
  cout<<"Enter a number";
   cin>>b;

}


constru(int num1,int num2){
 a = num1;
 b = num2;

}

void disaply(){
    cout<<a<<b;

}
};

int main(){
   constru o1(10,20);
   constru o2 = o1; 
o2.disaply();
    return 0;
}