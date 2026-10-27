int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8380[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 95;
    int v2 = 57;
    int v3 = 100;
    int v4 = 22;
    int v5 = 50;
    int v6 = 19;
    int v7 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_8380[i] = v3 + i; }
    v2 = v2 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
