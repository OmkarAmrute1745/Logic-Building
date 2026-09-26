/*
 Q - Accept N numbers from user and dispaly all such elements which are divisiable by 5 
   
   Input  : 
        N : 6
        Elements : 85  66  3  80  93  88
        Output   : 85  80
  
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
   for (int i = 0 ; i < iLength ; i++ )
    {
      if((Arr[i] % 5) == 0)
      { 
        printf("%d \t",Arr[i]);
      }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    } 
    
    printf("Enter %d elements ", iSize);
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter Elements : %d ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
  
    Display(p,iSize);

    free(p);

    return 0 ;
}