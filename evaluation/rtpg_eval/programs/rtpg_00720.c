int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 39;
    int v1 = 82;
    int v2 = 90;
    int v3 = 44;
    int i;
    v0 = 35;
    v2 = __helper(v2);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
