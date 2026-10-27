int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3329[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 74;
    int v2 = 30;
    int v3 = 59;
    int v4 = 55;
    int v5 = 12;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_3329[i] = v0 + i; }
    int *__p = &v5;
    *__p = *__p + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
