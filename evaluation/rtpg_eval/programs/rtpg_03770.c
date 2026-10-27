int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3770[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 92;
    int v2 = 64;
    int v3 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_3770[i] = v3 + i; }
    v0 = v0 - v1;
    v2 = __helper(v2);
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
