int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6722[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 88;
    int v2 = 49;
    int v3 = 79;
    int v4 = 5;
    int v5 = 60;
    int i;
    v2 = 89;
    for (i = 0; i < 10; i++) { __arr_6722[i] = v2 + i; }
    v2 = v2 % (v1 + 1);
    v5 = __arr_didx[__idx_didx[0]];
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
