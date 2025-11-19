///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Accept
// Description:     It is use to print n number of *
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Accept(int iNo)
{
    int iValue = 0;

    for(iValue = 0; iValue < iNo; iValue++)
    printf("*");
}
    int main()
{

    int iValue = 0;

    printf("Enter the nunmber: ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Accept
// Description:     It is use to print n number of *
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iValue = 0;

    while(iNo > iValue)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to Hello or Demo if No is less than 10.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
if(iNo <= 10)
    printf("Hello");
    else
    printf("Demo");
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);

return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to display first number in second number of times.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
int i = 0;

for(i = 0;i < iFrequency; i++)
printf("%d",iNo);
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter First number: ");
    scanf("%d",&iValue);

    printf("Enter Second number: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkEven
// Description:     It is use to display number is even or odd.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

    void ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    printf("This number is even");
    else
    printf("This number is odd");
}
int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    ChkEven(iValue);

    return 0;
}
