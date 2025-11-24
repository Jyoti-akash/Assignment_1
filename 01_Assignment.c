///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Divide
// Description:     It is use to divide two numbers 
// Input:           int,int
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 ==0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}
int main()
{
    int iValue1 = 15,  iValue2 = 5;
    int iRet = 0;
    iRet = Divide(iValue1,iValue2);
    printf("Division is %d",iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to display 5 times "marvellous"
// Input:           void
// Output:          None
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
    int i = 0;
    for(i = 1; i<=5 ;i++)
    {
        printf("Marvellous\n");
    }
}
int main()
{
    Display();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to display 5 to 1 numbers
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
    int i = 0;
    i = 5;
    while(i>=1)
    {
        printf("%d",i);
        i++;
    }
}
int main()
{
    Display();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Check
// Description:     It is use to display given input is divisible by 5 or not
// Input:           Int
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
if(iNo%5 == 0)
return true;
else
return false;
}

int main()

{
int iValue = 0;
bool bRet = false;

printf("Enetr the number:");
scanf("%d",&iValue);

bRet = Check(iValue);

if(bRet == true)
printf("This Number is divisible by 5: %d");
else
printf("This Number is not divisible by 5: %d");
return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Accept
// Description:     It is use to display 5 star
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
int iValue = 0;

for(iValue = 0; iValue <=5; iValue++)
printf("*");
}

int main()
{
int iValue = 0;
iValue = 5;

Accept(iValue);

return 0;
}

