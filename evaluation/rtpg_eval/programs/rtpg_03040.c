int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 68;
    int v2 = 5;
    int v3 = 32;
    int v4 = 56;
    int v5 = 84;
    int v6 = 87;
    int v7 = 59;
    int i;
    v1 = v1 * 4;
    v4 = __helper(v4);
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
