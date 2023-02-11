#include<iostream>
using namespace std;
class convert{

    int sec;
    int min;
    int hrs;


    public:
    convert(){

    }

    convert(int t){
            
            min = t/60;
            hrs = min/60;
    sec = t;
    }

void display(){
    cout<<"sec= " <<sec << endl << "min= " << min << endl << "hrs= " << hrs<<endl;
}

};

int main(){
int n = 3600;
convert t1 = n;
t1.display();

    return 0;
}