int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 99;
    int v1 = 16;
    int v2 = 51;
    int v3 = 9;
    int v4 = 2;
    int v5 = 57;
    int v6 = 94;
    int v7 = 79;
    int i;
    v1 = v1 - v6;
    v0 = 45;
    v7 = __helper(v7);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
