int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 32;
    int v1 = 9;
    int v2 = 30;
    int v3 = 6;
    int v4 = 40;
    int v5 = 12;
    int i;
    if (v5 > v4) { v5 = v4; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
