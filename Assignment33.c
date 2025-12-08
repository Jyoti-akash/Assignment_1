////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkAlpha
// Description:     It is use to check input is alphabet or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            29/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
    {
        return TRUE;     
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkCapital
// Description:     It is use to check character is Capital or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            29/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
    {
        return TRUE;     
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital character");
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkDigit
// Description:     It is use to check character is Digit or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            29/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9'))
    {
        return TRUE;     
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkCapital
// Description:     It is use to check character is Small or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            29/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
    {
        return TRUE;     
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Case Character");
    }
    else
    {
        printf("It is not a Small Case character");
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   DisplaySchedule
// Description:     It is use to display students exams schedule.
// Input:           Char
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            29/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam at 7 AM.");     
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam at 8.30 AM.");     
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam at 9.20 AM.");     
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam at 10.30 AM.");     
    }
    else
    {
        printf("Division is not valid.");
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Division: ");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}


