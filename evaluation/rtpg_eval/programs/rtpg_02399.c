int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 53;
    int v1 = 98;
    int v2 = 93;
    int v3 = 68;
    int i;
    v3 = v3 * 7;
    v3 = v3 + v2;
    if (v2 > v0) { v2 = v0; }
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
