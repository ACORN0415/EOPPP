int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 43;
    int v2 = 89;
    int v3 = 79;
    int v4 = 66;
    int v5 = 69;
    int v6 = 72;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v2;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
