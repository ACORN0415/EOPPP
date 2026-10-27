int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3653[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 73;
    int v2 = 32;
    int v3 = 32;
    int v4 = 21;
    int v5 = 65;
    int v6 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_3653[i] = v6 + i; }
    v0 = 19;
    int *__p = &v4;
    *__p = *__p + 1;
    v0 = __helper(v0);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
