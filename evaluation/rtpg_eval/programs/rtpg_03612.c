int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3612[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 97;
    int v2 = 88;
    int v3 = 40;
    int v4 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_3612[i] = v3 + i; }
    v0 = v0 - v4;
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
