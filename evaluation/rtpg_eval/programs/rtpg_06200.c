int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6200[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 96;
    int v2 = 80;
    int v3 = 4;
    int v4 = 68;
    int v5 = 14;
    int v6 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_6200[i] = v4 + i; }
    if (v5 > v4) { v5 = v4; }
    v5 = __helper(v5);
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
