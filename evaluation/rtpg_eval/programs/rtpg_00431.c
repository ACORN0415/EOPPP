int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_431[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 41;
    int v2 = 16;
    int v3 = 45;
    int v4 = 32;
    int v5 = 2;
    int i;
    v3 = v3 - v4;
    for (i = 0; i < 10; i++) { __arr_431[i] = v3 + i; }
    v5 = v5 * 6;
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
