int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 32;
    int v2 = 31;
    int v3 = 46;
    int v4 = 97;
    int v5 = 64;
    int v6 = 100;
    int v7 = 10;
    int i;
    v4 = 6;
    if (v1 > v0) { v1 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
