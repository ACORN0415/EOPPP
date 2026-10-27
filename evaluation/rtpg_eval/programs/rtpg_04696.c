int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4696[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 25;
    int v2 = 86;
    int i;
    v2 = v2 * 5;
    for (i = 0; i < 10; i++) { __arr_4696[i] = v2 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v2 = __helper(v2);
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }
