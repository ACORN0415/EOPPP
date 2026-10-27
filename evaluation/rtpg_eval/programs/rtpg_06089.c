int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 60;
    int v2 = 21;
    int v3 = 25;
    int v4 = 10;
    int v5 = 58;
    int i;
    if (v3 > v1) { v3 = v1; }
    v0 = v0 * 10;
    v0 = 78;
    v5 = __helper(v5);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
