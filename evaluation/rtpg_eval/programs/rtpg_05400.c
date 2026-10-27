int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 7;
    int v2 = 33;
    int v3 = 50;
    int v4 = 46;
    int i;
    v4 = 59;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v0;
    }
    v3 = __helper(v3);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = v4 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
