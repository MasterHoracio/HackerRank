#include <cstdio>
#include <algorithm>

#define LIMITN 255
#define LIMITM 55

using namespace std;

typedef long long int lld;

lld Ci[LIMITM], MEMO[LIMITN][LIMITM];

lld computeChange(lld n, lld m){
	if(n < 0 || m < 0)
		return 0;
	else if(n == 0)
		return 1;
	else if(MEMO[n][m] != -1)
		return MEMO[n][m];

	return MEMO[n][m] = computeChange(n, m - 1) + computeChange(n - Ci[m], m);
}

int main(){
	lld n, m;

	scanf("%lld %lld",&n,&m);

	for(int i = 0; i < m; i++)
		scanf("%lld",&Ci[i]);

	for(int i = 0; i <= n; i++)
		fill(MEMO[i], MEMO[i]+m, -1);

	printf("%lld\n",computeChange(n, m - 1));

	return 0;
}