
///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   printEven
// Description:     It is use to print even number
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("%d ", 2*i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);
    printEven(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to print even factors.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ",i);
        }
    }
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
// Function Name:   DisplayConvert
// Description:     It is use to convert case of that character.
// Input:           Char
// Output:          Char
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

char DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("%c\n",cValue);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c\n", cValue);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter the character: ");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkVowel
// Description:     It is use to check character is vowel or not.
// Input:           Char
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            25/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 'A'||cValue == 'E' ||cValue == 'I' ||cValue == 'O' ||cValue == 'U' ||
    cValue == 'a'||cValue == 'e'||cValue == 'i'||cValue == 'o'||cValue == 'u')
        return True;
    else
        return False;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = False;
    printf("Enter the character: ");
    scanf("%c",&cValue);
    bRet = ChkVowel(cValue);
    if(bRet == True)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}
