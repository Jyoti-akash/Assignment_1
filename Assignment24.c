//////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Maximum
// Description:     It is use to display the largest number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Maximum(p,iSize);
    printf("Laregest number is %d",iRet);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Minimum
// Description:     It is use to display the Smallest number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Minimum(p,iSize);
    printf("Smallest number is %d",iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Diffrence
// Description:     It is use to display the Diffrence between largest & smallest number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iLength)
{
    int iCnt = 0;
    int iDiff = 0;
    int iMax = Arr[0],iMin = Arr[0];
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    } 
    iDiff = iMax - iMin;
    return iDiff;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Diffrence(p,iSize);
    printf("Diffrence is %d",iRet);

    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ThreeDigits
// Description:     It is use to display that number which contains 3 digits in it.
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int ThreeDigits(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d",Arr[iCnt]);
        }
    }  
    printf("\n");
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = ThreeDigits(p,iSize);
    
    
    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   DigitSum
// Description:     It is use to display the summation of digits of each number.
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int DigitSum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        iSum = 
    }  
    printf("\n");
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = DigitSum(p,iSize);
    
    
    free(p);
    return 0;
}
