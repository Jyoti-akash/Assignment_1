////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display Alphabet pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
        
    for(i = 1; i <= iRow; i++)
    {
        char ch = 'A';

        for(j = 1; j <= iCol; j++)
        {
            printf("%c ", ch);
            ch++;
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
// Description:     It is use to display Alphabet pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;   
    for(i = 1; i <= iRow; i++)
    {
        char ch1 = 'A';
        char ch2 = 'a';
        
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c ", ch2);
                ch2++;
            }
            else
            {
                printf("%c ", ch1);
                ch1++;
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
// Description:     It is use to display Alphabet pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iRow; j >= 0; j--)
        {
            printf("%c ", ch);
        }
            ch++;
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
// Date:            22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol ; j++)
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

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Pattern
// Description:     It is use to display number pattern.
// Input:           Int
// Output:          Void
// Author:          Jyoti Akash Gudpale
// Date:            22/11/2025
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

