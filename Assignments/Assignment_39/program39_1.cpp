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

            // Print one star
            cout << "* \t";

            // Recursive call
            Display(iNo - 1);
        }
};

int main() 
{
    Pattern pobj;   // Object creation

    pobj.Display(5); // Method call
    
    return 0;
}
