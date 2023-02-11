#include <iostream>
using namespace std;
int mycountttttttttttttttt;
class alpha
{
public:
    alpha()
    {
        mycountttttttttttttttt++;
        cout << "Number of object created: " << mycountttttttttttttttt << endl;
    }

    ~alpha()
    {
        cout << "Number of objects destroyed: " << mycountttttttttttttttt;
        mycountttttttttttttttt--;
    }
};

int main()
{

    alpha N1;
    {
        cout << "Creating two more objects" << endl;
        alpha o2, o3;
    }
    cout << "Back To main" << endl;
    return 0;
}