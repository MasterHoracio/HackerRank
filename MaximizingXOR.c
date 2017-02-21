#include <stdio.h>

int main(){
	int L, R, max = -10000;

	scanf("%d %d",&L,&R);

	for(int i = L; i <= R; i++){
		for(int j = i; j <= R; j++){
			if((i ^ j) > max)
				max = i ^ j;
		}
	}

	printf("%d\n",max);

	return 0;
}