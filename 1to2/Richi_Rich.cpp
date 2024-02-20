//Difficulty 878
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a,b,c,d;
	cin>>n;
	
	for(int i = 1; i <= n; i++){
	    cin>>a>>b>>c;
	    if(a > b){
	        d = (a - b)/c;
	    }else{
	        d = (b-a)/c;
	    }
	    cout<<d<<endl;
	}
	
}
