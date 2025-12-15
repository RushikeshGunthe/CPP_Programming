#include <iostream>
using namespace std;

class Pattern 
{

    public:

        // Recursive function inside class
        void Display(int iNo) 
        {

            // Base condition
            if (iNo == 0)
            {
                return;
            }

            cout << iNo <<"\t" << "*\t";

            // Recursive call
            Display(iNo - 1);
        }
};

int main() 
{
    int iValue = 0;

    cout << "Enter how many numbers you want to display in reverse: \n";
    cin >> iValue;

    Pattern pobj;   // Object creation

    pobj.Display(iValue); // Method call
    
    return 0;
}
