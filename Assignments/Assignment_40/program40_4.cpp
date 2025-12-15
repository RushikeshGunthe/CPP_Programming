#include <iostream>
using namespace std;

class Pattern 
{

    public:
        
        char cAlpha = 'A'; 

        // Recursive function inside class
        void Display(int iNo) 
        {

            // Base condition
            if (iNo == 0)
            {
                return;
            }

            cout << cAlpha <<"\t";
            cAlpha++;

            // Recursive call
            Display(iNo - 1);
        }
};

int main() 
{
    int iValue = 0;

    cout << "Enter how many capital alphabet you want to display: \n";
    cin >> iValue;

    Pattern pobj;   // Object creation

    pobj.Display(iValue); // Method call
    
    return 0;
}
