//3. Addition prog in cpp using class

#include<iostream>
using namespace std;

class Arithmetic
{
   public:
   
        int Addition(int iValue1 , int iValue2)
        {
            int iAdd;
            iAdd = iValue1 + iValue2;
            return iAdd;
        }
};
int main()
{
    
    int iNo1 = 0 , iNo2 = 0 , iAns = 0;

    cout<<"Enter First Number : \n"; // printf("Enter First Number : \n");
    cin>>iNo1;                       // scanf("%d",iNo1);

    cout<<"Enter Second Number : \n";
    cin>>iNo2;
    
     Arithmetic obj;

     iAns = obj.Addition(iNo1 , iNo2);

    cout<<"Addtion is : " << iAns <<"\n"; // printf("Addition is : %d \n",iAns);
    
    return 0;
}