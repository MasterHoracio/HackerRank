#include <cstdio>

#define maxn 30005
#define _MIN 999999
#define _MAX -99999

using namespace std;

int parent[maxn], rank[maxn], visited[maxn];

int max(int a, int b){if(a > b) return a; return b;}
int min(int a, int b){if(a < b) return a; return b;}

int find(int u){
	while(u != parent[u])
		u = parent[u];
	return u;
}

void _union(int u, int v){
	int parentU = find(u);
	int parentV = find(v);
	
	if(parentU == parentV)
		return;
		
	if(rank[parentU] < rank[parentV]){
		parent[parentU] = parentV;
		rank[parentV] += rank[parentU];
	}else{
		parent[parentV] = parentU;
		rank[parentU] += rank[parentV];
	}
	
}

int main(){
	int n, minimo = _MIN, maximo = _MAX, u, v;
	
	scanf("%d",&n);
	
	for(int i = 1; i <= n * 2; i++)
		parent[i] = i, rank[i] = 1, visited[i] = 0;
	
	for(int i = 0; i < n; i++){
		scanf("%d %d",&u,&v);
		_union(u, v);
		visited[v] = visited[u] = 1;
	}
	
	
	for(int i = 1; i <= n * 2; i++){
		if(visited[i] == 1){
			maximo = max(maximo, rank[find(i)]);
			minimo = min(minimo, rank[find(i)]);
		}
	}
	
	printf("%d %d\n",minimo,maximo);
	
	return 0;
}
