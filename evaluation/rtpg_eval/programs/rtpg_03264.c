int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 32;
    int v2 = 76;
    int v3 = 1;
    int v4 = 61;
    int v5 = 46;
    int v6 = 41;
    int v7 = 36;
    int i;
    v6 = 72;
    v5 = v5 + v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
