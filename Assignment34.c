////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   DisplayASCII
// Description:     It is use to Display ASCII table.
// Input:           Char
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Char|Dec|Oct|Hex\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%-4c\t%-4d\t%-4o\t%-4x\t\n",(char)iCnt,(char)iCnt,(char)iCnt,(char)iCnt);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to print small to capital and capital to small letter.
// Input:           Char
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')  
    {
        ch = ch - 32;
    }
    printf("Converted character is: %c",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to print all the character from the input character till Z.
// Input:           Char
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c ",ch);
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')  
    {
        while(ch <= 'z')
        {
            printf("%c ",ch);
            ch++;
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkSpecial
// Description:     It is use to check input is Special character or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
 
BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '*' || ch == '%' || ch == '#' || ch == '^' || ch == '&' || ch == '$')
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
    BOOL bRet  = FALSE;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to print ASCII value in decimal, octal & hexadecimal format.
// Input:           Char
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal         : %d\n",ch);
    printf("Octal           : %o\n",ch);
    printf("Hexadecimal     : %x\n",ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
