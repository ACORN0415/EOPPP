int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 65;
    int v2 = 13;
    int i;
    v0 = 94;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
