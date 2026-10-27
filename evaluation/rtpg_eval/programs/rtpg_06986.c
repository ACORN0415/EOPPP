int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 20;
    int v1 = 9;
    int v2 = 52;
    int v3 = 17;
    int v4 = 59;
    int i;
    v4 = v4 * 9;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v3;
    }
    v4 = __helper(v4);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
