int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7020[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 51;
    int v2 = 71;
    int v3 = 4;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_7020[i] = v2 + i; }
    if (v2 > v3) { v2 = v3; }
    int *__p = &v2;
    *__p = *__p + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
