#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int const &a, int const &b){
	return a > b;
}


int main(){
	int n, k, li, ti, ans;
	vector <int> balance;

	scanf("%d %d",&n,&k);

	ans = 0;

	for(int i = 0; i < n; i++){
		scanf("%d %d",&li,&ti);
		if(ti == 1)
			balance.push_back(li);
		else
			ans += li;
	}

	sort(balance.begin(), balance.end(), compare);

	for(int i = 0; i < balance.size(); i++)
		(i + 1 <= k) ? ans += balance[i] : ans -= balance[i];

	printf("%d\n",ans);

	return 0;
}