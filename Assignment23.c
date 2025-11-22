///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Check
// Description:     It is use to check no is present or not
// Input:           Int
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        return true;
    }

return false;
}
int main()
{
    int iSize = 0, iValue = 0;
    int iCnt = 0;
    bool bRet = false;
    int*p = NULL;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the %d elements",iSize);

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter element %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter no whose freq find: ");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);

    if (bRet == true)
        printf("%d is present.\n", iValue);
    else
        printf("%d is not present.\n", iValue);
        
        free(p);
        return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   FirstOcc
// Description:     It is use to return first occurance index number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        return iCnt;
    }
    return -1;
}
int main()
{
    int iCnt = 0;
    int*p = NULL;
    int iSize = 0;
    int iRet = 0;
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);


    p = (int *)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number for search:");
    scanf("%d",&iValue);

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurance of number is %d",iRet);
    }

    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   LastOcc
// Description:     It is use to return last occurance index number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = iLength -1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        return iCnt;
    }
    return -1;
}
int main()
{
    int iCnt = 0;
    int*p = NULL;
    int iSize = 0;
    int iRet = 0;
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);


    p = (int *)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number for search:");
    scanf("%d",&iValue);

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurance of number is %d",iRet);
    }

    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Range
// Description:     It is use to dissplay elements from range
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        printf("%d",Arr[iCnt]);
    }
}

int main()
{
    int iSize = 0;
    int*p = NULL;
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the number of element:");
    scanf("%d",&iSize);

    printf("Enter the starting point:");
    scanf("%d",&iValue1);

    printf("Enter the ending point:");
    scanf("%d",&iValue2);
    
    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the %d element: ",iSize);
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Range(p,iSize,iValue1,iValue2);

    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Product
// Description:     It is use to return product of all odd number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iProduct
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        iProduct = Arr[iCnt] * Arr[iCnt+1];
    }
}

int main()
{

    int iSize = 0;
    int*p = NULL;
    int iValue1 = 0;
    int iRet = 0;
    int iCnt = 0;


    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    {
        if(p == NULL)
        {
            printf("Unable to Allocate memory");
            return -1;
        }
    }

    printf("Enter the %d Element: ",iSize);

    iRet = Product(p,iSize);

    free(p);
    return 0;
}
