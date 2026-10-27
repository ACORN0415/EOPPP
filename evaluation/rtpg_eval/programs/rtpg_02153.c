int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2153[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 23;
    int v2 = 51;
    int v3 = 5;
    int v4 = 11;
    int v5 = 18;
    int v6 = 78;
    int i;
    v6 = v6 - v4;
    for (i = 0; i < 10; i++) { __arr_2153[i] = v1 + i; }
    if (v6 > v3) { v6 = v3; }
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
