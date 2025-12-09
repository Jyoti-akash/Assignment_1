////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   strlwrx
// Description:     It is use to convert string into lower case.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void strlwrx(char*str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;  
    }
}
int main()
{
    char arr[20];

    printf("enter string: ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);
    printf("Modified string is: %s",arr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   struprx
// Description:     It is use to convert string into upper case.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void struprx(char*str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;  
    }
}
int main()
{
    char arr[20];

    printf("enter string: ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);
    printf("Modified string is: %s",arr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   strtoggle
// Description:     It is use to convert string into Toggle case.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void strtoggle(char*str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
    {
        *str = *str + 32;
    }
    else if(*str >= 'a' && *str <= 'z')  
    {
        *str = *str - 32;
    }
        str++;  
    }
}
int main()
{
    char arr[20];

    printf("enter string: ");
    scanf("%[^'\n']s",arr);

    strtoggle(arr);
    printf("Modified string is: %s",arr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   DisplayDigit
// Description:     It is use to display only digit.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayDigit(char*str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("enter string: ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CountWhite
// Description:     It is use to count only white space.
// Input:           Char
// Output:          int
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountWhite(char*str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet =0;

    printf("enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("White space is: %d",iRet);

    return 0;
}

