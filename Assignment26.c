////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display alphabet.
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c ",ch);
        ch++;
    }  
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display input number in reverse and after each number print  #.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d #",iCnt);
    }  
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display input number and after each number print  #.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d # ",iCnt);
    }  
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display input number and before each number print  * and #.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# %d * ",iCnt);
    }  
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display even number.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iNum = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iNum = iCnt * 2;
        printf("%d ",iNum);
    }  
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}