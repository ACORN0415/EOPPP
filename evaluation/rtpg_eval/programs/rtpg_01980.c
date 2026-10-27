int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1980[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 62;
    int v2 = 41;
    int v3 = 77;
    int v4 = 94;
    int v5 = 74;
    int v6 = 65;
    int v7 = 1;
    int i;
    for (i = 0; i < 10; i++) { __arr_1980[i] = v5 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v4 = __helper(v4);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
