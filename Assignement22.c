///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CountEven
// Description:     It is use to frequency of even number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0, iECount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iECount++;
        }
    }
    return iECount;
}

int main() 
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d",&iSize);
    
    ptr = (int*)malloc(iSize*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elemment: ",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }
        iRet = CountEven(ptr,iSize);
        
        printf("Result is : %d",iRet);
        free(ptr);
        return 0;
}


///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Frequency
// Description:     It is use to return diffrence between frequency of even & odd numbers
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
   int iCnt = 0;
   int ECount = 0;
   int OCount = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(Arr[iCnt]%2 == 0)
        {
            ECount++;
        }
        else if(Arr[iCnt]%2 != 0)
        {
            OCount++;
        }
   }
    return ECount - OCount;
}

int main() 
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d",&iSize);
    
    ptr = (int*)malloc(iSize*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elemment: ",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }
        iRet = Frequency(ptr,iSize);
        
        printf("Result is : %d",iRet);
        free(ptr);
        return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Check
// Description:     It is use to check 11 number is presnt or not
// Input:           Int
// Output:          Bool
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        return true;
    }
    return false;
}
int main() 
{
    int iSize = 0, *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    bool bRet = false;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);
    
    ptr = (int*)malloc(iSize*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elemment: ",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }
        bRet = Check(ptr,iSize);

        if(bRet == true)
        printf("11 is present");
        else
        printf("11 is not present");

        free(ptr);

        return 0;
}


///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Frequency
// Description:     It is use to return frequency of 11 number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0; 
    int FCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            FCount++;
        }
    }
    return FCount;
}

int main() 
{
    int iSize = 0, *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);
    
    ptr = (int*)malloc(iSize*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elemment: \n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }
        iRet = Frequency(ptr,iSize);

        printf("Frequency of 11 is %d",iRet);

        free(ptr);

        return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Frequency
// Description:     It is use to return frequency of input number
// Input:           Int
// Output:          Int
// Author:          Jyoti Akash Gudpale
// Date:            15/11/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int j)
{
    int iCnt = 0; 
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == j)
        {
            iCount++;
        }
    }
    return iCount;
}

int main() 
{
    int iSize = 0;
    int i = 0;
    int iRet = 0;
    printf("Enter number of elements: ");
    scanf("%d",&iSize);
            
    ptr = (int*)malloc(iSize*sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    } 
        printf("Enter %d elemment: \n",iSize);
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            printf("Enter element %d: ",iCnt + 1);
            scanf("%d",&ptr[iCnt]);
        }

        printf("Enter no whose frequecny want: \n");
        scanf("%d",&i);
            
        iRet = Frequency(ptr,iSize,i);

        printf("Frequency of %d is: %d",i,iRet);

        free(ptr);

        return 0;
}