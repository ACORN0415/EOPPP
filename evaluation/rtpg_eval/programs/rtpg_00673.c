int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 71;
    int v1 = 88;
    int v2 = 100;
    int v3 = 86;
    int i;
    v2 = v2 + v3;
    v0 = v0 - v1;
    v3 = __helper(v3);
    v2 = v2 & v3;
    return v0;
}
int main(void) { return test_func(); }
