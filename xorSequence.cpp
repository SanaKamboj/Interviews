using namespace std;

int xor2ints(long x, long y){
    long res = 0;
    long xorbit = 0;
    for(int i = 15; i >= 0; i--){
        bool b1 = x & (1<<i);
        bool b2 = y & (1<<i);
        xorbit = b1^b2;
        res = res<<1;
        res |= xorbit;
    }
    return res;
}

int main(){
    int Q;
    cin >> Q;
    std::vector<long> array (pow(10,5));
    array.push_back(0);
    for(long i = 1; i < pow(10,5) ; i++){
        array[i] = xor2ints(array[i-1],i);
    }
    for(int a0 = 0; a0 < Q; a0++){
        long L;
        long R;
        cin >> L >> R;
        long result = array[L];
        for(long i = L+1; i <= R; i++){
            result = xor2ints(result, array[i]);
        }
        cout<<result<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll get2(ll x){
    ll y=x/4*4;
    ll R=0;
    for (ll i=y;i<=x;i++) R^=i;
    return R;
}

ll get(ll x){
    if (x==0) return 0;
    ll k=(x+1)/2;
    x%=2;
    if (!x){
        return get2(k)*2ll;
    } else {
        return ((get2(k-1)*2ll)^(k&1ll));
    }
}

void sol(){
    ll l,r;
    scanf("%lld%lld",&l,&r);
    printf("%lld\n",(get(r)^get(l-1)));
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) sol();
    return 0;
}
