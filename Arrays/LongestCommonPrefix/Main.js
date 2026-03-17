const longestCommonPrefix = (strs) => {
  let prefixString = strs[0];
  let prefixLen = prefixString.length;
  for (let i = 1; i < strs.length; i++) {
    let s = strs[i];
    while (prefixString != s.substring(0, prefixLen)) {
      prefixLen--;
      if (prefixLen == 0) return "";
      prefixString = prefixString.substring(0, prefixLen);
    }
  }
  return prefixString;
};
console.log(longestCommonPrefix(["flower", "flow", "flight"]));
