int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2380[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 42;
    int v2 = 91;
    int i;
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 10; i++) { __arr_2380[i] = v1 + i; }
    v0 = v0 * 5;
    v2 = __helper(v2);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
