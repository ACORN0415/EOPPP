int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 29;
    int v2 = 46;
    int v3 = 63;
    int v4 = 70;
    int v5 = 94;
    int v6 = 47;
    int i;
    for (i = 0; i < 11; i++) {
        v6 = v6 + v0;
    }
    v6 = v6 * 8;
    if (v3 > v2) { v3 = v2; }
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
