#include <cstdio>
#include <algorithm>

#define maxn 1e5 + 5

using namespace std;

int main(){
	int n, toys[(int)maxn], pos, ans;

	scanf("%d",&n);

	for(int i = 0; i < n; i++)
		scanf("%d",&toys[i]);

	sort(toys, toys + n);

	ans = pos = 0;
	for(int i = 0; i < n; i++){
		pos = i;
		while(toys[pos] + 4 >= toys[i])
			i++;
		if(pos < n)
			ans++;
		i--;
	}

	printf("%d\n",ans);

	return 0;
}