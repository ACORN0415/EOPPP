int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 45;
    int v1 = 48;
    int v2 = 55;
    int v3 = 97;
    int v4 = 97;
    int v5 = 68;
    int v6 = 11;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 % (v4 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
