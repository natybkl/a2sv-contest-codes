
int twoStacks(int x, vector<int> a, vector<int> b) {
   
     int count=0,i=0,j=0;
     int sum=0;
     
    while(sum<(x-1) ){
        
         sum=sum+a[i];
        
         count++;  
        
         sum=sum+b[j];
            
         count++;  
        
         i++;  j++;
    
     }
    return count;
    }
    
    


