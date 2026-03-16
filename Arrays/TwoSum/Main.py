def twoSumMethod(nums,target):
    nums_map = {}
    #enumerate is used to get the element and the respective index from the array
    for i,num in enumerate(nums):
        diff = target - num
        if diff in nums_map:
            return [nums_map[diff],i]
        nums_map[num]=i
    
nums = [2,7,5,3]
target = 9
result = twoSumMethod(nums,9)
print(f"The Result Array : ",result)