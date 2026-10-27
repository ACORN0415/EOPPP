int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6963[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 96;
    int v2 = 31;
    int v3 = 15;
    int v4 = 16;
    int v5 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_6963[i] = v5 + i; }
    v3 = __helper(v3);
    int *__p = &v3;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
