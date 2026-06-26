#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
template <class T> using vc = vector<T>;
using vi   = vector<int>;
using vll  = vector<ll>;
using vpii = vector<pii>;
using vvi  = vector<vi>;

#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define sz(x)    (int)(x).size()
#define pb       push_back
#define eb       emplace_back
#define rep(i, n)    for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)   for (int i = 1; i <= (int)(n); ++i)
#define repr(i, n)   for (int i = (int)(n) - 1; i >= 0; --i)
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define each(x, c)   for (auto& x : c)

template <class T, class = void> struct is_iter : false_type {};
template <class T>
struct is_iter<T, void_t<decltype(begin(declval<T>()))>> : true_type {};

template <class T> void rd1(T& x);
template <class A, class B> void rd1(pair<A, B>& p) { rd1(p.first); rd1(p.second); }
template <class... A> void rd1(tuple<A...>& t) { apply([](auto&... a) { (rd1(a), ...); }, t); }
template <class T> void rd1(T& x) {
    if constexpr (is_iter<T>::value && !is_same_v<decay_t<T>, string>) { each(e, x) rd1(e); }
    else cin >> x;
}
template <class... A> void re(A&... a) { (rd1(a), ...); }
#define def(T, ...) T __VA_ARGS__; re(__VA_ARGS__)

template <class T> void wr1(const T& x);
template <class A, class B> void wr1(const pair<A, B>& p) { wr1(p.first); cout << ' '; wr1(p.second); }
template <class T> void wr1(const T& x) {
    if constexpr (is_iter<T>::value && !is_same_v<decay_t<T>, string>) {
        bool fst = true; each(e, x) { if (!fst) cout << ' '; wr1(e); fst = false; }
    } else cout << x;
}
template <class... A> void pr(const A&... a) { (wr1(a), ...); }
template <class... A> void ps(const A&... a) {
    int i = 0; ((cout << (i++ ? " " : ""), wr1(a)), ...); cout << '\n';
}

void solve() {
    def(int, n);

    map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int total = 0;
    rep(i, n) {
        def(string, s);
        total += faces[s];
    }
    ps(total);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
