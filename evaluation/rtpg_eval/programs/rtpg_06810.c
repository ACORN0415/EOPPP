int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6810[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 61;
    int v2 = 23;
    int v3 = 88;
    int v4 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_6810[i] = v1 + i; }
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 15; i++) {
        v4 = v4 + v3;
    }
    v4 = v4 % (v3 + 1);
    v1 = __arr_didx[__idx_didx[0]];
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
