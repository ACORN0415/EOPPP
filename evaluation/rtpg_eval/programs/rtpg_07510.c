int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 80;
    int v2 = 93;
    int v3 = 20;
    int v4 = 60;
    int i;
    v3 = 52;
    if (v3 > v0) { v3 = v0; }
    v2 = v2 | v3;
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
