package Arrays.LongestCommonPrefix;

public class Main {
    public static String longestCommonPrefix(String[] strs,int strsLen){
        if(strs==null||strsLen==0) return "";
        String prefixString = strs[0];
        int prefixLen = strs[0].length();
        for(int i=1;i<strs.length;i++){
            String s = strs[i];
            while(!prefixString.equals(s.substring(0,prefixLen))){
                prefixLen--;
                if(prefixLen==0) return "";
                prefixString = prefixString.substring(0,prefixLen);
            }
        }
        return prefixString;
    }
    public static void main(String[] args){
        String[] strs = new String[]{"flower","flight","flow"};
        int strsLen = 3;
        String result = longestCommonPrefix(strs,strsLen);
        System.out.println(result);
    }
}
