#include <stdio.h>

int main()
{
    /* code */
    // int  marks[] = {2,4,23};

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("value at %d index is = %d\n",i,marks[i]);

    // }
    // printf("%d",marks[2]);

    int arr[]= {2,44,6654,23};
    printf("address of first element = %d\n",&arr);
    printf("value of first element = %d\n",*(&arr[0]));
    printf("address of second element = %d\n",&arr[1]);
    printf("value of first element = %d\n",*(&arr[1]));
    return 0;
}
