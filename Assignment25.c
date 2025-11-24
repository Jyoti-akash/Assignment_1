////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Diffrence
// Description:     It is use to display summation of even number & summation of odd number.
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iNo)
{
    int iCnt = 0;
    int iEsum = 0;
    int iOsum = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        iEsum = iEsum + Arr[iCnt];
        else
        iOsum = iOsum + Arr[iCnt];
    }
    return iEsum - iOsum; 
}
int main()
{
    int iSize = 0;
    int*p = NULL;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter the element %d: ",iCnt + 1);

        scanf("%d",&p[iCnt]);
    }
    iRet = Diffrence(p,iSize);
    
    printf("Result id: %d",iRet);
    
    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to display such elements which are divisible by 5..
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iNo)
{
    int iCnt = 0;

    printf("Elements divisible by 5 are:\n");

    for(iCnt = 0; iCnt < iNo;iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int*p = NULL;
    int iCnt = 0;

    printf("Enter the number of element: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
    printf("Unable to allocate memory");
    return -1;
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter the Element %d: ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to display such elements which are even & divisible by 5..
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iNo)
{
    int iCnt = 0;

    printf("Elements are even & divisible by 5 are:\n");

    for(iCnt = 0; iCnt < iNo;iCnt++)
    {
        if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 2 == 0)
        {
            printf("%d", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int*p = NULL;
    int iCnt = 0;

    printf("Enter the number of element: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
    printf("Unable to allocate memory");
    return -1;
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter the Element %d: ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to display such elements which are divisible by 3 & 5..
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iNo)
{
    int iCnt = 0;

    printf("Elements are divisible by 3 & 5 are:\n");

    for(iCnt = 0; iCnt < iNo;iCnt++)
    {
        if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 3 == 0)
        {
            printf("%d", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int*p = NULL;
    int iCnt = 0;

    printf("Enter the number of element: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
    printf("Unable to allocate memory");
    return -1;
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter the Element %d: ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Description:     It is use to display such elements which are multiples of 11.
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iNo)
{
    int iCnt = 0;

    printf("Elements are divisible by 3 & 5 are:\n");

    for(iCnt = 0; iCnt < iNo;iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int*p = NULL;
    int iCnt = 0;

    printf("Enter the number of element: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
    printf("Unable to allocate memory");
    return -1;
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter the Element %d: ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);
    
    return 0;
}