int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7511[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 77;
    int v2 = 8;
    int v3 = 47;
    int i;
    v3 = v3 + v3;
    for (i = 0; i < 10; i++) { __arr_7511[i] = v2 + i; }
    v1 = __helper(v1);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
