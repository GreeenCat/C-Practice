#include<iostream>
using namespace std;
class test{

int roll;
public:
static int count; 
void setdata(){
    cout<<"Enter roll No: "<<endl;
    cin>>roll;
    count++; 
}

static void counterincrementer(){
    cout<<"Count is: " << count<<endl;
}





};
int test::count=0;

int main(){
    test o1;
    o1.setdata();
    test::counterincrementer();
test o2;
    o2.setdata();
    test::counterincrementer();
    return 0;
}