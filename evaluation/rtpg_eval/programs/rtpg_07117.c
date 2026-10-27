int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 36;
    int v1 = 23;
    int v2 = 31;
    int v3 = 76;
    int i;
    if (v3 > v1) { v3 = v1; }
    v0 = v0 * 10;
    v1 = 64;
    v2 = v2 & v1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
