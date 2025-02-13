## **📌 Two-Pointer Technique (Short Summary)**  

### **1️⃣ Opposite Direction Two-Pointer**  
**🔹 Used for:** Finding pairs/triplets in **sorted arrays**.  
**🔹 Process:**  
- Place one pointer at the **beginning (`left`)** and one at the **end (`right`)**.  
- Move **left** if sum is too small, move **right** if sum is too large.  
- Stop when the required condition is met.  
**⏳ Time Complexity:** **O(N)**  

✔ **Example:** **Finding Two Sum in a Sorted Array**  
```cpp
int left = 0, right = nums.size() - 1;
while (left < right) {
    int sum = nums[left] + nums[right];
    if (sum == target) return true;
    else if (sum < target) left++;
    else right--;
}
```

---
<br>

## **2️⃣ Same Direction Two-Pointer (Sliding Window)**  
**🔹 Used for:** Finding **subarrays/substrings** with certain properties.  
**🔹 Process:**  
- Use two pointers (`left` and `right`), both starting at the **beginning**.  
- Expand `right` to **grow** the window.  
- Move `left` to **shrink** the window when needed.  
**⏳ Time Complexity:** **O(N)**  

✔ **Example:** **Find the Longest Subarray Sum ≤ K**  
```cpp
int left = 0, sum = 0, maxLen = 0;
for (int right = 0; right < nums.size(); right++) {
    sum += nums[right];
    while (sum > k) sum -= nums[left++];
    maxLen = max(maxLen, right - left + 1);
}
```

---
<br>

## **3️⃣ Merging Two Sorted Arrays (Like Merge Sort)**  
**🔹 Used for:** Merging two **sorted arrays** efficiently.  
**🔹 Process:**  
- Use two pointers, one for each array (`i` for `arr1`, `j` for `arr2`).  
- Compare elements and insert the smaller one into the result array.  
- Move the pointer of the array from which the element was taken.  
**⏳ Time Complexity:** **O(N + M)**  

✔ **Example:** **Merge Two Sorted Arrays**  
```cpp
int i = 0, j = 0;
while (i < a.size() && j < b.size()) {
    if (a[i] < b[j]) result.push_back(a[i++]);
    else result.push_back(b[j++]);
}
```

---
<br>

## **🛠 When to Use Two Pointers?**  
✅ **Sorted Arrays** (Finding pairs/triplets, Two Sum, Three Sum)  
✅ **Subarrays & Strings** (Sliding Window problems)  
✅ **Merging** (Merging sorted arrays)  
✅ **Palindrome Checking** (Two pointers from both ends)  
