int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 35;
    int v1 = 72;
    int v2 = 100;
    int v3 = 51;
    int i;
    v0 = v0 + v2;
    if (v3 > v1) { v3 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    v3 = v3 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
