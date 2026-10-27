int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4127[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 0;
    int v2 = 11;
    int v3 = 38;
    int v4 = 40;
    int v5 = 48;
    int v6 = 38;
    int i;
    v3 = 71;
    v1 = v1 * 10;
    for (i = 0; i < 10; i++) { __arr_4127[i] = v6 + i; }
    int *__p = &v5;
    *__p = *__p + 1;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
