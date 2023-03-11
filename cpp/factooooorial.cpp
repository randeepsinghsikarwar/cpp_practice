#include<iostream>
using namespace std;
    long long  factorial(int N) {
    	if (N==0)
        return 1;
        else{
            long long m=N;
            for(int i=1;i<m;i++)
            N = N*i;
	        return N;
            }
    }
int main()
{
//	factorial(13);
	cout<<factorial(13)<<endl;
}