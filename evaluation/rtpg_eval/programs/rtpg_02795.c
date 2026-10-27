int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 21;
    int v1 = 22;
    int v2 = 72;
    int v3 = 67;
    int v4 = 7;
    int v5 = 84;
    int v6 = 60;
    int i;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v4;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
