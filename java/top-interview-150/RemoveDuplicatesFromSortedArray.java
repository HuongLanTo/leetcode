public class RemoveDuplicatesFromSortedArray {
    public static int removeDuplicates(int[] nums) {
        int len = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[len] = nums[i];
                len++;
            }
        }
        return len;
    }

    public static void main(String[] args) {
        int[] nums = {0,0,1,1,1,2,2,3,3,4};
        int result = removeDuplicates(nums);
        System.out.println("Result: " + result);
        System.out.print("nums:");
        for (int i = 0; i < result; i++) {
            System.out.print(" " + nums[i]);
        }
    }
}
