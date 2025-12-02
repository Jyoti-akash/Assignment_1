////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display # triangle pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            26/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    {
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i < j)
                printf("# ");
                else
                printf("* ");
            }
            printf("\n");
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows & columns: ");
    scanf("%d  %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display # triangle pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            26/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    {
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j > iCol - i + 1)
                printf("# ");
                else
                printf("* ");
            }
            printf("\n");
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows & columns: ");
    scanf("%d  %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display Alpdiagonal pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            26/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    {
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j == i)
                printf("$ ");
                else
                printf("* ");
            }
            printf("\n");
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows & columns: ");
    scanf("%d  %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display middle @ pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            26/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    {
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == 1 || i == iRow || j == 1 || j == iCol)
                printf("* ");
                else
                printf("@ ");
            }
            printf("\n");
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows & columns: ");
    scanf("%d  %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display Middle * pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            26/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    {
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == 1 || i == iRow)  
            {
                printf("%d ", j);
            }
            else                    
            {
                if(j == 1 || j == iCol)
                    printf("%d ", j);
                else
                    printf("* ");
            }
            }
            printf("\n");
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows & columns: ");
    scanf("%d  %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}


