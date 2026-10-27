int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_414[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 46;
    int v2 = 79;
    int v3 = 75;
    int v4 = 92;
    int v5 = 50;
    int v6 = 36;
    int v7 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_414[i] = v7 + i; }
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
