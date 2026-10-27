int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 29;
    int v1 = 57;
    int v2 = 1;
    int i;
    v1 = v1 + v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v0 = v0 ^ v2;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
