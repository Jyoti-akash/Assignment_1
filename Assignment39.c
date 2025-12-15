////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is recursive program use to display *.
// Input:           Int
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
    static int i = 1;
    if(i <= 5)
    {
        printf("* ");
        i++;
        Display();
    }
}
int main()
{
    Display();
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is recursive program use to  1 - 5 Numbers.
// Input:           Int
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

    void Display()
    {
        static int i = 1;
        if(i <= 5)
        {
            printf("%d ",i);
            i++;
            Display();
        }
    }

int main()
{
    Display();
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is recursive program use to display 5 - 1 Numbers.
// Input:           Int
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

    void Display()
    {
        static int i = 5;
        if(i >= 1)
        {
            printf("%d ",i);
            i--;
            Display();
        }
    }

int main()
{
    Display();
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is recursive program use to display A - F alphabet.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
    static char ch = 'A';
    if(ch <= 'F')
    {
        printf("%c ",ch);
        ch++;
        Display();
    }
}
int main()

{
    Display();
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is recursive program use to display a - f alphabet.
// Input:           Char
// Output:          void
// Author:          Jyoti Akash Gudpale
// Date:            03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
    static char ch = 'a';
    if(ch <= 'f')
    {
        printf("%c ",ch);
        ch++;
        Display();
    }
}
int main()

{
    Display();
    return 0;
}