#include <stdio.h>
#include <math.h>

void twoSum(int array[], int lenght) {
    for(int c=0; c<lenght; c++){
        printf("Element %d in position %d \n", array[c], c);
    }
}

int main() {
    int nums[] = {2, 11, 15, 7};
    int target = 22;
    int lenght = sizeof(nums) / sizeof(nums[0]);

    twoSum(nums, lenght);
}