#include <stdio.h>

void linear_search(int A[], int key, int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
    {
        if(A[i] == key)
            printf("Element found at %d position\n", i+1);
    }
}

int main()
{
    int nums[] = {5, 6, 1, 3, 15, 9, 10, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    linear_search(nums, 1, n);
    return 0;
}