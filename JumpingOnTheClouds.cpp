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

#define maxn 105

using namespace std;


int main(){
    vector <int> clouds(maxn);
    int nclouds, ans = 0;
    
    scanf("%d",&nclouds);
    
    for(int i = 1; i <= nclouds; i++)
    	scanf("%d",&clouds[i]);
    	
    for(int i = 1; i < nclouds; i++){
    	if(clouds[i] == 0){
    		if(i + 2 <= nclouds && clouds[i + 2] == 0)
    			i++;
    		ans++;
		}
	}
	
	printf("%d\n",ans);
    
    return 0;
}

