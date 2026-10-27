int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8594[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 58;
    int v2 = 11;
    int v3 = 100;
    int v4 = 22;
    int v5 = 44;
    int i;
    for (i = 0; i < 10; i++) { __arr_8594[i] = v2 + i; }
    v4 = v4 & v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
