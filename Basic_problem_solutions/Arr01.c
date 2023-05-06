//Good pair problem
#include <stdio.h>

// Naive method to find a pair in an array with a given sum
void findPair(int nums[], int n, int target)
{
    // consider each element except the last
    for (int i = 0; i < n - 1; i++)
    {
        // start from the i'th element until the last element
        for (int j = i + 1; j < n-1; j++)
        {
            // if the desired sum is found, print it
            if (nums[i] + nums[j] == target)
            {
                printf("Pair found (%d, %d)\n", nums[i], nums[j]);
                return;
            }
        }
    }

    // we reach here if the pair is not found
    printf("Pair not found");
}

int main(void)
{
    int nums[5];
    printf("enter array element\n");
    for(int i=0;i<5;i++){
            scanf("%d",&nums[i]);
    }

    printf("Array is as follow:\n");
    for(int i=0;i<5;i++){
            printf("|%d|",nums[i]);
    }
  printf("\n");

    int target;
    printf("enter the one target element from array to find pair for that:\n");
    scanf("%d",&target);

    int n = sizeof(nums)/sizeof(nums[0]);
    findPair(nums, n, target);

    return 0;
}
    
