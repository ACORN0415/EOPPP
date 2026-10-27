int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8513[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 17;
    int v2 = 70;
    int v3 = 64;
    int v4 = 6;
    int v5 = 67;
    int v6 = 65;
    int i;
    v5 = 11;
    for (i = 0; i < 10; i++) { __arr_8513[i] = v3 + i; }
    v2 = v2 - v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __helper(v3);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
