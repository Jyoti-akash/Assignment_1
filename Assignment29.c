////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display number pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
     int i = 0, j = 0;
     int num = 1;
        
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", num);

            num++;          

            if(num > 9)     
            {
                num = 1;
            }
        }
        printf("\n");
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
// Description:     It is use to display number pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
     int i = 0, j = 0;
        
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            printf("%d ",j*2);
            else
            printf("%d ",(j*2)-1);
        }
        printf("\n");
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
// Description:     It is use to display alphabet & number pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
     int i = 0, j = 0;
        
    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)   
        {
            char ch = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        else             
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", (j*2)-1);
            }
        }
        printf("\n");
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
// Description:     It is use to display negative & positive number pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
     int i = 0, j = 0;
        
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            printf("%d ",j);
            else
            printf("%d ", -j);
        }
        printf("\n");
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
// Description:     It is use to display number pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            25/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        int num = i;

        for(j = 1; j <= iCol; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
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








