int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 39;
    int v1 = 5;
    int v2 = 21;
    int v3 = 25;
    int v4 = 90;
    int v5 = 23;
    int v6 = 21;
    int v7 = 5;
    int i;
    v5 = v5 - v7;
    v3 = v3 + v1;
    v6 = v6 * 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
