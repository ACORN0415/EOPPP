int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 32;
    int v1 = 2;
    int v2 = 23;
    int v3 = 34;
    int v4 = 66;
    int i;
    v0 = v0 - v2;
    if (v2 > v4) { v2 = v4; }
    v0 = v0 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 / (v1 + 1);
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
