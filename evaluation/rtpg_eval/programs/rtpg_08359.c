int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8359[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 39;
    int v2 = 56;
    int v3 = 87;
    int v4 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_8359[i] = v3 + i; }
    if (v4 > v2) { v4 = v2; }
    v4 = v4 - v1;
    v3 = v3 & v2;
    v0 = __helper(v0);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
