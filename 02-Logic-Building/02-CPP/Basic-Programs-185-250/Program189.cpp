// Addition oop

#include<iostream>
using namespace std;

class Arithmetic
{
   public:                       // Access Specifier
         int iValue1;            // Characterstics
         int iValue2;  


        Arithmetic()  // Default Constructor
        {
            iValue1 = 0;
            iValue2 = 0;
        }
        Arithmetic(int A , int B)  // Parameterised constructor
        {
            iValue1 = A;
            iValue2 = B;
        }
        
        int Addition()
        {
            int iAdd;
            iAdd = iValue1 + iValue2;
            return iAdd;
        }
};
int main()
{
   int iRet = 0;

   Arithmetic obj1;
   Arithmetic obj2(10,11);   
   Arithmetic obj3(20,21);
   
   iRet = obj1.Addition();
   cout<<"Addition is : "<<iRet <<"\n";  // 0
   
   iRet = obj2.Addition();
   cout<<"Addition is : "<<iRet <<"\n"; // 21
   
   iRet = obj3.Addition();
   cout<<"Addition is : "<<iRet <<"\n"; // 41
    return 0;
}