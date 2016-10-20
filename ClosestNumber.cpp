#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

typedef long long int lld;

int main()
{
    lld TC, a, b, x, ans;

    scanf("%lld",&TC);

    while(TC--){
        scanf("%lld %lld %lld",&a,&b,&x);
        ans = pow(a,b) + (x / 2);
        printf("%lld\n",ans - (ans % x));
    }

    return 0;
}
