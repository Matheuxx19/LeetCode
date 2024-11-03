#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i;
    int ie = 0;
    int id = numsSize-1;
    int iResp = 0;
    int *resp = malloc(2 * sizeof(int));
    *returnSize=2;
    int nums2[10000];

    for(i=0;i<numsSize;i++){
        nums2[i] = nums[i];
    }

    qsort(nums,numsSize,sizeof(int),compare);

    int sum = nums[ie]+nums[id];
    while(sum!=target){
        if(sum < target){
            sum = nums[ie+1]+nums[id];
            ie++;
        }else if(sum > target){
            sum = nums[ie]+nums[id-1];
            id--;
        }
    }
    ie = nums[ie];
    id = nums[id];

    for(i=0;i<numsSize;i++){
        if(nums2[i] == ie || nums2[i] == id){
            resp[iResp] = i;
            iResp++;
        }
    }
    return resp;
}