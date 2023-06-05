#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("value at postion 3 of the array in %d\n", arr[3]);
    printf("the address of first element: %d\n", &arr[0]);
    printf("the address of first element: %d\n", arr);
    printf("the address of second element: %d\n", &arr[1]);
    printf("the address of second element: %d\n", arr + 1);

    printf("the address of first element: %d\n", *(&arr[0]));
    printf("the address of first element: %d\n", *(arr));
    printf("the address of second element: %d\n", *(&arr[1]));
    printf("the address of second element: %d\n", *(arr + 1));
    return 0;
}