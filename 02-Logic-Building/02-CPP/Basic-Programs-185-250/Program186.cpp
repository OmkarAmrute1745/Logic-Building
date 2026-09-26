//1. Addition prog in cpp

#include<iostream>
using namespace std;

int main()
{
    
    int iNo1 = 0 , iNo2 = 0 , iAns = 0;

    cout<<"Enter First Number : \n"; // printf("Enter First Number : \n");
    cin>>iNo1;                       // scanf("%d",iNo1);

    cout<<"Enter Second Number : \n";
    cin>>iNo2;

     iAns = iNo1 + iNo2;

    cout<<"Addtion is : " << iAns <<"\n"; // printf("Addition is : %d \n",iAns);
    
    return 0;
}