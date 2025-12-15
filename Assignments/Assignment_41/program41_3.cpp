#include <iostream>
using namespace std;

class Pattern 
{

    public:

        int iCount = 0;

        // Recursive function inside class
        int Strlen(char brr[], int i) 
        {

            // Base condition
            if (brr[i] == '\0')
            {
                return iCount;
            }
            iCount++;

            // Recursive call
            Strlen(brr, i+1);
        }
};

int main() 
{
    int iRet = 0;
    char arr[20]; 

    cout << "Enter a string \n";
    cin >> arr;

    Pattern pobj;   // Object creation

    iRet = pobj.Strlen(arr,0); // Method call
    cout << "letters in string are: "<< iRet;
    
    return 0;
}
