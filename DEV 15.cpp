#include<iostream>
using namespace std;
int main(){
	int j;
int rows= 20;
int i=1;
while(i <= rows){
	int space = 1;
	while(space <= rows-i){
		cout<<" ";
		space++;
	}
	int j =1;
	while ( j<=2*i-1){
		cout<<"X";
		j++;
	}
	cout<<endl;
	i++;
}
	return 0;
}

