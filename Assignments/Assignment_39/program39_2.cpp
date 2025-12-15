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

int main() {
    Pattern pobj;   // Object creation
    pobj.Display(5); // Method call
    return 0;
}
