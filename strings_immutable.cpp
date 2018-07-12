#include<iostream>
using namespace std;
int main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,0};
	int* ptr=array;
	*ptr++;
	
	cout<<array[0];
}
