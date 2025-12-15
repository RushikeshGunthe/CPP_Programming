#include <iostream>
using namespace std;

class Pattern 
{

    public:
        int iValue = 1;

        // Recursive function inside class
        void Display(int iNo) 
        {

            // Base condition
            if (iValue > iNo)
            {
                return;
            }

            cout << iValue <<"\t";

            iValue++;

            // Recursive call
            Display(iNo);
        }
};

int main() 
{
    int iValue = 0;

    cout << "Enter how many numbers you want to display: \n";
    cin >> iValue;

    Pattern pobj;   // Object creation

    pobj.Display(iValue); // Method call
    
    return 0;
}
