void moveZeroes(int* nums, int numsSize){
    int j=-1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            j=i;
            break;
        }
    }
    int temp;
    if(j!=-1){
        for(int i=j+1;i<numsSize;i++)
        {
            if(nums[i]!=0)
             {
                 temp=nums[j];
                 nums[j]=nums[i];
                j++;
                nums[i]=temp;
            }
        }
    }
}