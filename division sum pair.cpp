int divisibleSumPairs(int n, int k, vector<int> ar) {

       int p=0;

       int i=0;
       while(i<n){
           
           for(int j=0; j<n; j++){
               

               if(ar[i]+ar[j] && ar[i]<ar[j]){
                   
                   p+=1;
               }
               
           }
          i++; 
       }
 return p;
}