#include<iostream>
using namespace std;
class Array{
	public:
		int a[10];
		int size;
		int length;
};
void display(Array arr){
	int i;
	for(i=0;i<arr.length;i++){
		cout<<arr.a[i]<<" ";
	}
}
int issorted(Array arr){
	int i;
	for(i=0;i<arr.length-1;i++){
		if(arr.a[i]>arr.a[i+1])
		return 0;
	}
	return 1;
}
int main(){
	Array arr{{2,3,4,5,6,18,15},10,7};
	display(arr);
	cout<<endl<<issorted(arr);
	return 0;
}
