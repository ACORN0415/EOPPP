int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 91;
    int v2 = 17;
    int v3 = 25;
    int v4 = 36;
    int v5 = 32;
    int v6 = 90;
    int v7 = 34;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v2;
    }
    v5 = 16;
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
