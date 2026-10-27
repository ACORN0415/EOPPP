int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 77;
    int v1 = 61;
    int v2 = 46;
    int v3 = 77;
    int v4 = 87;
    int v5 = 99;
    int i;
    if (v4 > v5) { v4 = v5; }
    v2 = v2 ^ v0;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
