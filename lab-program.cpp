#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class swap{
    public:
    swap(int *a,int *b){
        int temp;
		temp=*a;
        *a=*b;
        *b=temp;
    }
};

int main() {
    int a,b;
    cin>>a>>b;
   	swap s;
    s(&a,&b);
    cout<<a<<b;
    return 0;
}
