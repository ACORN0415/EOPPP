int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 8;
    int v1 = 35;
    int v2 = 82;
    int i;
    v2 = __helper(v2);
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
