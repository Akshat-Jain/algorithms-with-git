#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("Enter number of elements in array: ");
    int n; scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));

    int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int max = arr[0];
    for(i=1; i<n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Maximum: %d\n",max);

    return 0;
}
