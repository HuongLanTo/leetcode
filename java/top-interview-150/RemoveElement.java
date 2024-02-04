class RemoveElement {
    public static int removeElement(int[] nums, int val) {
        int start = 0;
        int end = nums.length - 1;
        while (start <= end) {
            if (nums[end] == val) {
                end--;
            } else {
                if (nums[start] == val) {
                    nums[start] = nums[end];
                    end--;
                }
                start++;
            }
        }
        return start;
    }

    public static void main(String[] args) {
        int[] nums = {3,2,2,3};
        int val = 3;
        int result = removeElement(nums, val);
        System.out.println("Output: " + result);
        System.out.print("nums:");
        for (int i = 0; i < result; i++) {
            System.out.print(" " + nums[i]);
        }
    }
}
