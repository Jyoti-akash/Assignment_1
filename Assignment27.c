////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display star pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
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
                printf("* ");
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
// Date:            21/11/2025
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
            printf("%d",i+1);
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
// Description:     It is use to display reverse number pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
        
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d ",j);
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
// Description:     It is use to display * and #  pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            21/11/2025
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
            if(j % 2 == 0)
            printf("# ");
            else
            printf("* ");
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
// Date:            21/11/2025
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
            printf("%d", i);
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