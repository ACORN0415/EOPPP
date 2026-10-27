int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1222[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 15;
    int v2 = 8;
    int v3 = 31;
    int v4 = 97;
    int v5 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_1222[i] = v5 + i; }
    v5 = __helper(v5);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
