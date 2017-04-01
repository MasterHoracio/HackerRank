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

#define maxn 2005

using namespace std;

int main(){
	int tc, n ,k, integers[maxn], memo[maxn];

	scanf("%d",&tc);

	while(tc--){
		scanf("%d %d",&n,&k);

		fill(memo, memo + k + 1, 0);

		for(int i = 1; i <= n; i++)
			scanf("%d",&integers[i]);

		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= k; j++)
				if(j >= integers[i])
					memo[j] = max(memo[j - integers[i]] + integers[i], memo[j]);

		printf("%d\n",memo[k]);

	}

	return 0;
}