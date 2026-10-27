int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 36;
    int v2 = 8;
    int v3 = 35;
    int v4 = 68;
    int v5 = 67;
    int v6 = 54;
    int i;
    v3 = v3 * 10;
    v3 = v3 + v4;
    if (v2 > v6) { v2 = v6; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v6 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
