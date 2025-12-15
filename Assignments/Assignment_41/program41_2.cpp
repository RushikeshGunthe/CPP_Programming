#include <iostream>
using namespace std;

class Pattern 
{

    public:
    
        int iDigit = 0, iSum = 0;

        // Recursive function inside class
        int Display(int iNo) 
        {
            
            
            // Base condition
            if (iNo == 0)
            {
                return iSum;
            }

            iDigit = iNo % 10;
            iSum = iSum + iDigit;

            // Recursive call
            Display(iNo/10);
        }
};

int main() 
{
    int iValue = 0, iRet = 0;

    cout << "Enter a number: \n";
    cin >> iValue;

    Pattern pobj;   // Object creation

    iRet = pobj.Display(iValue); // Method call

    cout << "Sum of all digits of given numbers is: " << iRet << "\n";
    
    return 0;
}
