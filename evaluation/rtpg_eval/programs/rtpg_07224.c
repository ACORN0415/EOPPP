int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 5;
    int v1 = 1;
    int v2 = 1;
    int v3 = 90;
    int v4 = 78;
    int v5 = 98;
    int v6 = 78;
    int i;
    v1 = v1 - v3;
    v4 = v4 / (v2 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
