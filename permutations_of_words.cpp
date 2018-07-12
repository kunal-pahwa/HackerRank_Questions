#include<iostream>
using namespace std;
void Swap(char *x,char *y){
	char temp;
	temp=*y;
	*y=*x;
	*x=temp;
}
int main()
{
	char str[]="ABCDE";
	int n=5;
	int l=0;
	int r=5;
	while(l<r){
		int x=0;
		printf("%s\n",str);
		for(int i=1;i<r;i++){
			Swap((str+x),(str+i));
			printf("%s\n",str);
			x++;
		}
		l++;
	}
}
