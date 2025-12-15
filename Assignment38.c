////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   StrCpyRev
// Description:     It is use to string in reverse order.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrCpyRev(char*str,char*dest)
{
    int i =0;
    int j =0;

    while(str[i] != '\0')
    {
        i++;
    }
    i--;
    while(i >= 0)
    {
        dest[j] = str[i];
        j++;
        i--;
    }
    dest[j] = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);
    printf("%s",brr);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   StrCpyX
// Description:     It is use to remove white space.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrCpyX(char*str,char*dest)
{
    int i =0;
    int j =0;

    while(str[i] != '\0')
    {
        if(str[i] != ' ')      // skip spaces
        {
            dest[j] = str[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyX(arr,brr);
    printf("%s",brr);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   StrCpyCap
// Description:     It is use to covert small character into capital character.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrCpyCap(char*str,char*dest)
{
    int i =0;
    int j =0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')     
        {
            dest[j] = str[i] - 32;
        }
        else
        {
            dest[j] = str[i];               
        }
        i++;
        j++;
    }
    dest[j] = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr,brr);
    printf("%s",brr);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   StrCpySmall
// Description:     It is use to covert capital character into small character.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrCpySmall(char*str,char*dest)
{
    int i =0;
    int j =0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')     
        {
            dest[j] = str[i] + 32;
        }
        else
        {
            dest[j] = str[i];               
        }
        i++;
        j++;
    }
    dest[j] = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpySmall(arr,brr);
    printf("%s",brr);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   StrCpyToggle
// Description:     It is use to covert character into toggle case.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrCpyToggle(char*str,char*dest)
{
    int i =0;
    int j =0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')     
        {
            dest[j] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            dest[j] = str[i] - 32;
        }
        else
        {
            dest[j] = str[i];               
        }
        i++;
        j++;
    }
    dest[j] = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr,brr);
    printf("%s",brr);
    
    return 0;
}


