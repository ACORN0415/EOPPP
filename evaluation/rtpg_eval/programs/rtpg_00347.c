int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 69;
    int v1 = 57;
    int v2 = 99;
    int v3 = 80;
    int v4 = 54;
    int v5 = 73;
    int v6 = 11;
    int i;
    if (v4 > v1) { v4 = v1; }
    v6 = 35;
    v6 = v6 - v4;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
