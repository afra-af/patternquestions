/*
1
21
321
4321
54321
*/
int n;
  cin>>n;
  int i=1;
  while(i<=n){
  	int j=1;
  //	int count=i;
  	while(j<=i){
  		cout<<i-j+1;
  		//count--;
  	    j=j+1;
	  }
	  
	  cout<<endl;
	  i=i+1;
  }
