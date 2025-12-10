////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkChar
// Description:     It is use to check charcater is present or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char*str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CountChar
// Description:     It is use to find input character frequency.
// Input:           Char
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;

int CountChar(char*str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is : %d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   FirstIndex
// Description:     It is use to character first index.
// Input:           Char
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;

int FirstIndex(char*str,char ch)
{
    int i = 0;

    while(*str != '\0')
    {
        if(str[i] == ch)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = FirstIndex(arr,cValue);

    printf("Character location is : %d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   LastChar
// Description:     It is use to find last character index.
// Input:           Char
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;

int LastChar(char*str,char ch)
{
    int i = 0;
    int Last = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            Last = i;
        }
        i++;
    }
    return Last;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is : %d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   StrRev
// Description:     It is use to display reverse string.
// Input:           Char
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;

void StrRev(char*str)
{
    int start = 0;
    int end = 0;
    char temp;

    while(str[end] != '\0')
    {
        end++;
    }
    end--;  
    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];
    
    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    StrRev(arr);

    printf("Modified String is : %s",arr);

    return 0;
}
