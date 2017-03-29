#include <cstdio>
#include <queue>

#define maxn 100005

using namespace std;

typedef struct prump{
	int amount, distance, dif;
	prump(){
		amount = 0; 	distance = 0;	dif = 0;
	}
	prump(int _amount, int _distance, int _dif){
		amount = _amount;	distance = _distance;	dif = _dif;
	}
}prump;

prump petrol[maxn];

int solve(int n){
	int sum = petrol[0].dif, indx = 1, ans = 0;
	queue <prump> qu;
	prump tmp;

	qu.push(petrol[0]);

	while(qu.size() != n){
		tmp = qu.front();
		if(sum < 0){
			sum -= tmp.dif;
			qu.pop();
			ans++;
			if(ans == n)
				ans = 0;
		}else{
			sum += petrol[indx].dif;
			qu.push(petrol[indx++]);
			if(indx == n)
				indx = 0;
		}
	}
	return ans;
}

int main(){
	int n, amount, distance;

	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		scanf("%d %d",&amount, &distance);
		petrol[i] = prump(amount, distance, amount - distance);
	}

	printf("%d\n",solve(n));

	return 0;
}