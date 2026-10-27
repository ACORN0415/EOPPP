int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 69;
    int v1 = 29;
    int v2 = 34;
    int v3 = 85;
    int v4 = 75;
    int v5 = 96;
    int v6 = 16;
    int v7 = 77;
    int i;
    v0 = v0 + v0;
    if (v7 > v1) { v7 = v1; }
    v5 = v5 * 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
