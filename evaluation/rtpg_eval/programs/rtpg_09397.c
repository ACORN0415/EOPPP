int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9397[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 15;
    int v2 = 29;
    int v3 = 68;
    int i;
    for (i = 0; i < 10; i++) { __arr_9397[i] = v2 + i; }
    v0 = v0 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
