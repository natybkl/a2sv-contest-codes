long repeatedString(string s, long n) {

       stringstream ss1,ss2;
       int count=0,num;
       string *ck;
       string k="a";
        ck=&k;
    
    ss1<<s.length();
    ss1>>num;

    if(num < n ){
       
    while(num>=n){  s.append(s);       }
    
        
    }
       for(int i=0; i<n; i++){
          
          if(s[i]!=*ck){ }else { count+=1;}
          
          
      }
return count;
}