int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 29;
    int v2 = 26;
    int v3 = 88;
    int v4 = 35;
    int i;
    v2 = v2 * 10;
    if (v2 > v4) { v2 = v4; }
    for (i = 0; i < 9; i++) {
        v3 = v3 + v1;
    }
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
