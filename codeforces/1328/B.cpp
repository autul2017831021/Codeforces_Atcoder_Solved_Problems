    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll ;
    int main() {
        ll q ;
        cin >> q ;
        while(q--) {
            ll n,k ;
            cin >> n >> k ;
            string str ;
            for ( ll i = 0 ; i < n-2 ; i++) {
                str.push_back('a');
            }
            for ( ll i =  n-2 ; i < n ; i++) {
                str.push_back('b');
            }
            if ( k == 1) cout << str << endl;
            else {
            ll sum = 0 ;
            ll i = 1 ;
            ll fact = 0 ;
            while(1) {
                sum = sum + i ;
                if ( sum >= k) {
                    if ( sum == k) fact = 1 ;
                    else if (sum > k) fact = 2 ;
                    break ;
                }
                else i++ ;
            }
            if ( fact == 1) {
                str[n-2] = 'a' ;
                str[n-2-(i-1)] = 'b' ;
                str[n-1] = 'a' ;
                str[n-1-(i-1)] = 'b' ;
            }
            else if ( fact == 2) {
                ll rem = k - (sum - i);
                str[n-2] = 'a';
                str[n-2-(i-1)] = 'b' ;
                str[n-1] = 'a';
                str[n-1-(rem-1)] = 'b' ;
            }
            cout << str << endl;
            }
     
        }
        return 0 ;
    }