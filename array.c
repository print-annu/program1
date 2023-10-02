#include <stdio.h>

int main()
{

    int arr[]= {2,44,6654,23};
    printf("address of first element = %d\n",&arr);
    printf("value of first element = %d\n",*(&arr[0]));
    printf("address of second element = %d\n",&arr[1]);
    printf("value of first element = %d\n",*(&arr[1]));
    return 0;
}
