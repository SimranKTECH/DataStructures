#include <stdio.h>

int linear_search(int arr[], int n, int key){        //function definition

    for(int i = 0; i < n; i++){               //for loop starts
        if (arr[i] == key){
            return i;
        }
    }
    return 0;
}

int main()
{
    int n, key, arr[20];                                            //initialization of variables
    printf("Enter the size of the array  : ");                      //user input for size of the array
    scanf("%d", &n);

    printf("\nEnter the elements of the array : ");                 //user input of elements in the array
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("\n Enter the element you want to search  : ");           //user input of specific number to be searched 
    scanf("%d", &key);

    int result = linear_search(arr, n, key);                          //function call

    if (result == 0){                                                 //if-else condition to finally print the searched element in the array
        printf("\n The key wasn't found!\n");
    }
    else
    {
        printf("\n They key %d was found @ index %d.\n", key, result);
    }
    
    return 0;
}
