int twoStacks(int x, vector<int> a, vector<int> b) {
    
   
    long int sum = 0, asize = a.size(), bsize = b.size();
    int count, i, j;

    for(i=0; i<asize; i++) {
        sum += a[i];
        if(sum>x) {
            sum-=a[i];
            break;
        }
    }

    count = i
  
    for(j=0; j<bsize; j++) {
        sum += b[j];
        if(sum>x && i>0) {
            sum -= a[--i];
        } else if(sum>x) {   
            break;
        }
       

        if(sum<=x) { count=max(count,i+j+1) ;  
        
    }
}  
  return count;

}