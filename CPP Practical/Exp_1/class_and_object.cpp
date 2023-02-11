//WAP name rollno mks of 5 subject display average

#include<iostream>
using namespace std;
class student
{
private:
    int roll;
    int mks[5];
    string name;
public:
    student(){
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter Roll.No"<<endl;
        cin>>roll;
        cout<<"Enter Marks"<<endl;
        for(int i=0;i<5;i++){
            cin>>mks[i];
        }

    }
void average(){
int sum = 0;
    for(int i=0;i<5;i++){
          sum = sum + mks[i];
          
        }
        cout<<"Average of Your marks in: "<<(sum/5)<<endl;


}


    };



int main(){
 student o1;
 o1.average();   

    return 0;
}