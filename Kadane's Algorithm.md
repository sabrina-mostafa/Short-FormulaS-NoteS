# **📌 Kadane's Algorithm  – (Maximum Subarray Sum)**  

## **🔹 Process of Kadane's Algorithm:**  
1️⃣ **Initialize Variables:**  
   - `maxSum = Array's 1st Element` → Stores the maximum sum found.  
   - `currSum = 0` → Tracks the current subarray sum.  

2️⃣ **Iterate Through Array:**  
   - Add the current element to `currSum`.  
   - If `currSum` exceeds `maxSum`, update `maxSum`.  
   - **If `currSum` becomes negative, reset it to `0` (restart subarray).**  

3️⃣ **Return `maxSum` as the Maximum Subarray Sum.**  
<br>

### **⏳ Time Complexity**  
---
✅ **O(N)** (Single pass through the array)  
✅ **O(1) Space** (No extra storage used)  

<br>

### **✔ Example Code**
---
```cpp
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], currSum = 0;
    
    for (int num : nums) {
        currSum += num;
        maxSum = max(maxSum, currSum);
        if (currSum < 0) currSum = 0;  // Reset if sum is negative
    }
    
    return maxSum;
}
```

