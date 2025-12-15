#include <iostream>
using namespace std;

class Pattern 
{

    public:
        int iAns = 1;

        // Recursive function inside class
        int Fact(int iNo) 
        {

            // Base condition
            if (iNo == 0)
            {
                return iAns;
            }

            iAns = iAns * iNo;

            // Recursive call
            Fact(iNo - 1);
        }
};

int main() 
{
    int iValue = 0, iRet = 0;

    cout << "Enter a number for factorial: \n";
    cin >> iValue;

    Pattern pobj;   // Object creation

    iRet = pobj.Fact(iValue); // Method call

    cout << "Factorial is: " << iRet << "\n";
    
    return 0;
}
