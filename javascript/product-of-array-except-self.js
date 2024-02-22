var productExceptSelf = function(nums) {
    let prefix = [];
    let suffix = [];
    let result = [];
    for (let i = 0; i < nums.length; i++) {
        if (i === 0) {
            prefix[i] = nums[i];
        } else {
            prefix[i] = prefix[i - 1] * nums[i];
        }
    }

    for (let i = nums.length - 1; i >= 0; i--) {
        if (i === nums.length - 1) {
            suffix[i] = nums[i];
        } else {
            suffix[i] = suffix[i + 1] * nums[i];
        }
    }
    
    for (let i = 0; i < nums.length; i++) {
        if (i === 0) {
            result[i] = suffix[i + 1];
        } else if (i === nums.length - 1) {
            result[i] = prefix[i - 1];
        } else {
            result[i] = prefix[i - 1] * suffix[i + 1];
        }
    }

    return result;
};