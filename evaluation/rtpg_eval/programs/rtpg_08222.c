int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8222[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 77;
    int v2 = 92;
    int v3 = 36;
    int v4 = 54;
    int v5 = 80;
    int v6 = 12;
    int v7 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_8222[i] = v1 + i; }
    v2 = v2 & v1;
    v6 = __helper(v6);
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
