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

#define _NEG -9999999

using namespace std;

int main(){
	vector < vector<int> > matrix(7, vector<int>(7));
	int ans = _NEG;
	
	for(int i = 1; i <= 6; i++)
		for(int j = 1; j <= 6; j++)
			scanf("%d",&matrix[i][j]);
			
	for(int i = 1; i <= 4; i++)
		for(int j = 1; j <= 4; j++)
			if(ans < (matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] + matrix[i + 1][j + 1] + matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2]))
				ans = matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] + matrix[i + 1][j + 1] + matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];
				
	printf("%d\n",ans);
			
	
	return 0;
}
