int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 61;
    int v2 = 68;
    int v3 = 69;
    int i;
    v3 = v3 + v3;
    v3 = v3 - v1;
    v1 = 91;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v1 = __helper(v1);
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
