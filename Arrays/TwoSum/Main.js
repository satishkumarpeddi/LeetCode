const twoSumMethod = (nums, target) => {
  let numMap = new Map();
  for (let i = 0; i < nums.length; i++) {
    let diff = target - nums[i];
    if (numMap.has(diff)) {
      return [numMap.get(diff), i];
    }
    numMap.set(nums[i], i);
  }
  return [-1, -1];
};
