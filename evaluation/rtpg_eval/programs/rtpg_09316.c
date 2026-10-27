int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9316[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 6;
    int v2 = 30;
    int v3 = 21;
    int v4 = 20;
    int v5 = 18;
    int v6 = 91;
    int i;
    for (i = 0; i < 10; i++) { __arr_9316[i] = v1 + i; }
    v2 = v2 + v0;
    v4 = __helper(v4);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
