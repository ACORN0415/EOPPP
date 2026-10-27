int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7073[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 64;
    int v2 = 62;
    int v3 = 37;
    int i;
    v0 = v0 - v3;
    for (i = 0; i < 10; i++) { __arr_7073[i] = v1 + i; }
    for (i = 0; i < 9; i++) {
        v0 = v0 + v0;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v2 = __helper(v2);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
