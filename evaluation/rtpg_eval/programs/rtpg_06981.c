int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6981[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 98;
    int v2 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_6981[i] = v2 + i; }
    v1 = __helper(v1);
    v2 = v2 / (v0 + 1);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
