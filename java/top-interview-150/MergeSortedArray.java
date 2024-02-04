class MergeSortedArray {
    public static void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m + n - 1;
        m--;
        n--;
        while (i >= 0) {
            if (m < 0) {
                nums1[i] = nums2[n];
                i--;
                n--;
            } else if (n < 0) {
                i = -1;
            } else {
                if (nums1[m] > nums2[n]) {
                    nums1[i] = nums1[m];
                    m--;
                } else {
                    nums1[i] = nums2[n];
                    n--;
                }
                i--;
            }
        }
    }

    public static void main(String[] args) {
        int[] nums1 = {1,2,3,0,0,0};
        int[] nums2 = {2,5,6};
        int m = 3, n = 3;
        merge(nums1, m, nums2, n);
        System.out.print("nums1: ");
        for (int i = 0; i < nums1.length; i++) {
            System.out.print(" " + nums1[i]);
        }
    }
}

