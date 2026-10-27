int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 75;
    int v2 = 100;
    int v3 = 2;
    int i;
    v3 = v3 + v2;
    v0 = v0 * 10;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v0 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
