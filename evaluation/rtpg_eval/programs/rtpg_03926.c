int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3926[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 43;
    int v2 = 24;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_3926[i] = v2 + i; }
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 & v0;
    return v0;
}
int main(void) { return test_func(); }
