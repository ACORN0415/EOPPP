int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6256[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 16;
    int v2 = 16;
    int v3 = 42;
    int v4 = 57;
    int v5 = 15;
    int v6 = 56;
    int v7 = 15;
    int i;
    for (i = 0; i < 10; i++) { __arr_6256[i] = v1 + i; }
    if (v7 > v7) { v7 = v7; }
    v7 = v7 + v7;
    v5 = __helper(v5);
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
