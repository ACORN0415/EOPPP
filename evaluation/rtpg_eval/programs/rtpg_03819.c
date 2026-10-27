int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 16;
    int v1 = 73;
    int v2 = 32;
    int v3 = 9;
    int v4 = 6;
    int v5 = 74;
    int v6 = 32;
    int i;
    v0 = v0 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
