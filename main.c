#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 10, 30, 20};
    int newArr[5];
    int k = 0;
    int alreadyExists;

    
    for(int i = 0; i < 5; i++)
    {
        alreadyExists = 0;

       
        for(int j = 0; j < k; j++)
        {
            if(arr[i] == newArr[j])
            {
                alreadyExists = 1;
                break;
            }
        }

        
        if(alreadyExists == 0)
        {
            newArr[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicates:\n");

    for(int i = 0; i < k; i++)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}
