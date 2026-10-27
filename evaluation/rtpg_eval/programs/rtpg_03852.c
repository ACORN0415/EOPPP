int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 26;
    int v2 = 11;
    int v3 = 97;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    v2 = 24;
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
