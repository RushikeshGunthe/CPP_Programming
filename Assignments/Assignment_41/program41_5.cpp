#include <iostream>
using namespace std;

class Pattern 
{

    public:
        
        int iAns = 1;
        int iDigit = 0; 

        // Recursive function inside class
        int Mult(int iNo) 
        {

            // Base condition
            if (iNo == 0)
            {
                return iAns;
            }

            iDigit = iNo % 10;

            iAns = iAns * iDigit;

            // Recursive call
            Mult(iNo / 10);
        }
};

int main() 
{
    int iValue = 0, iRet = 0;

    cout << "Enter a number: \n";
    cin >> iValue;

    Pattern pobj;   // Object creation

    iRet = pobj.Mult(iValue); // Method call
    
    cout << "multiplication of digits is: " << iRet;

    return 0;
}
