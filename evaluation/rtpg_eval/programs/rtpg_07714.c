int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7714[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 65;
    int v2 = 17;
    int v3 = 39;
    int v4 = 47;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_7714[i] = v2 + i; }
    if (v2 > v1) { v2 = v1; }
    v4 = __helper(v4);
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
