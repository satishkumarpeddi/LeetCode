def longestCommonPrefix(strs):
    prefixString = strs[0]
    prefixLen = len(prefixString)
    for s in strs[1:]:
        while prefixString != s[0:prefixLen]:
            prefixLen-=1
            if prefixLen==0:
                return ""
            prefixString = prefixString[0:prefixLen]
    return prefixString
    
strs = ["flower","flow","flight"];
result = longestCommonPrefix(strs)
print(f"The result : ",result)