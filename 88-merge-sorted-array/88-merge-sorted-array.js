var merge = function(nums1, m, nums2, n) {
    let len = m + n - 1
    
    for (i = m - 1 , j = n - 1; i >= 0 && j >= 0;)
    {
        if (nums1[i] > nums2[j])
            nums1[len--] = nums1[i--]
        else
            nums1[len--] = nums2[j--]
    }
    for (;j >= 0;)
        nums1[len--] = nums2[j--]
};