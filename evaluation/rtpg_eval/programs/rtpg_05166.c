int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 36;
    int v1 = 22;
    int v2 = 58;
    int v3 = 88;
    int v4 = 19;
    int v5 = 100;
    int v6 = 66;
    int v7 = 85;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v4;
    }
    v0 = v0 + v6;
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = v6 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
