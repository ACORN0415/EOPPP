int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 46;
    int v2 = 58;
    int v3 = 61;
    int i;
    if (v2 > v3) { v2 = v3; }
    v2 = v2 * 6;
    v1 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
