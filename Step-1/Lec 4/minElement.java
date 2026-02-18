public class minElement{
    public static void main(String args[]){
        
        System.out.println("Maximum Element: "+minEl());
    }

    static int minEl(){
        int[] arr= {-23, 12, 222, -1, 34, 4, 0, 234};
        int arrlen= arr.length;
        int key= arr[1];
        for(int i=0; i<arrlen; i++){
            if(key<arr[i]){
                key=arr[i];
            }
        }
        return key;
    }
}