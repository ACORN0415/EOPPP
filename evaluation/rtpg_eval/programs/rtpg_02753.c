int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 61;
    int v1 = 73;
    int v2 = 20;
    int v3 = 81;
    int v4 = 73;
    int i;
    v1 = 4;
    v4 = v4 * 7;
    v0 = v0 + v2;
    v3 = v3 / (v1 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
