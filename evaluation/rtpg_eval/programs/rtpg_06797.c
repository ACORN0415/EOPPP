int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 29;
    int v1 = 28;
    int v2 = 93;
    int v3 = 63;
    int v4 = 89;
    int i;
    v4 = 74;
    v4 = v4 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 / (v2 + 1);
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
