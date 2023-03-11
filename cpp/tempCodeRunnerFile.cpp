void  primeRange(int a){
    vector<int> p;
    for(int i = 0;i<=a;i++){
        for(int j = 2;j<=i;j++){
            if(i%j==0)
            cout<<i<<" ";
            break;
        }
    }
    
}