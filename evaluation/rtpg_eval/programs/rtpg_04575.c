int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4575[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 69;
    int v2 = 27;
    int v3 = 70;
    int v4 = 63;
    int v5 = 21;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_4575[i] = v4 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
