int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3016[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 89;
    int v2 = 17;
    int v3 = 38;
    int v4 = 38;
    int v5 = 4;
    int v6 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_3016[i] = v4 + i; }
    v2 = v2 * 9;
    int *__p = &v2;
    *__p = *__p + 1;
    v3 = __helper(v3);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
