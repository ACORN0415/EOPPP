int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1111[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 84;
    int v2 = 94;
    int v3 = 53;
    int v4 = 89;
    int v5 = 69;
    int v6 = 33;
    int v7 = 49;
    int i;
    v4 = v4 - v1;
    for (i = 0; i < 10; i++) { __arr_1111[i] = v4 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
