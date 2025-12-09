////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CountCapital
// Description:     It is use to Count capital character.
// Input:           Char
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char*str)
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CountSmall
// Description:     It is use to Count capital character.
// Input:           Char
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char*str)
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Diffrence
// Description:     It is use to Display Diff between small character & capital character.
// Input:           Char
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Diffrence(char*str)
{
    int iCapital = 0;
    int iSmall = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
    }
    iDiff = iCapital - iSmall;
    return iDiff;

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = Diffrence(arr);

    printf("%d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkVowel
// Description:     It is use to check Vowel is present or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char*str)
{
    while(*str != '\0')
    {
        if( *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE;
        }
        str++;
    }
        {
            return FALSE;
        }
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Reverse
// Description:     It is use to Display String in reverse.
// Input:           Char
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char*str)
{
    int iCnt = 0;
    while(str[iCnt] != '\0')
    {
        iCnt++;
    }
    for(iCnt = iCnt - 1; iCnt >= 0; iCnt--)
    {
        printf("%c",str[iCnt]);
    }
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}
