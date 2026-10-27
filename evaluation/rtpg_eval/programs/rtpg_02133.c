int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2133[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 14;
    int v2 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_2133[i] = v0 + i; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
