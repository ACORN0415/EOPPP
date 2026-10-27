int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 14;
    int v2 = 80;
    int v3 = 94;
    int v4 = 44;
    int v5 = 80;
    int v6 = 25;
    int v7 = 86;
    int i;
    v7 = 93;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
