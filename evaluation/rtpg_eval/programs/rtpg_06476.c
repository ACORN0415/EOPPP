int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 55;
    int v1 = 69;
    int v2 = 11;
    int v3 = 2;
    int i;
    if (v2 > v3) { v2 = v3; }
    v2 = v2 + v3;
    v3 = v3 & v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
