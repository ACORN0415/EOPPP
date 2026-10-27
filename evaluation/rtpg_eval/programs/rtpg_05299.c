int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5299[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 41;
    int v2 = 93;
    int i;
    v0 = v0 * 10;
    for (i = 0; i < 10; i++) { __arr_5299[i] = v1 + i; }
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
