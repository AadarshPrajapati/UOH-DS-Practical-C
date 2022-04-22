#include<stdlib.h>
#include<stdio.h>

int linearsearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 12, 53, 11, 54};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int result = linearsearch(arr, n, key);
    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);
    return 0;
}