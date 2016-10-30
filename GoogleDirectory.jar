
public static int printSum(String s){
       String[] arr=s.split("\n");
       int sum=0, spaces=0, multiplier=1;
       for(int i=arr.length-1;i>=0;i--){
           String line=arr[i];
           if(line.contains(".gif") | line.contains(".jpeg") ){
               if(space > 0) {
                  multiplier++;
               } else {
                  spaces=line.length()-line.trim().length();   
               }
           }
           if(spaces> line.length()-line.trim().length() ){
               sum+=line.trim().length()+1 * multiplier;
               spaces--;
               if(spaces == 0) {
                   multiplier = 1;
               }
           }
       }
       return sum;
}
