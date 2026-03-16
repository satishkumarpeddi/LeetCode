package Arrays.TwoSum;
import java.util.Arrays;
import java.util.HashMap;

public class Main{
    public static int[] twoSumMethod(int arr[],int target){
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<arr.length;i++){
            int diff = target - arr[i];
            if(map.containsKey(diff)){
                return new int[]{map.get(diff),i};
            }
            map.put(arr[i],i);
        }
        return new int[]{-1,-1};
    }
    public static void main(String[] args){
        int arr[] = new int[]{2,7,5,3};
        int target = 9;
        int[] result = twoSumMethod(arr,target);
        System.out.println(Arrays.toString(result));
    }
}