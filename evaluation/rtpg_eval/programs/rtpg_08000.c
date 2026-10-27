int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 61;
    int v1 = 35;
    int v2 = 18;
    int v3 = 92;
    int v4 = 94;
    int i;
    v0 = 7;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
