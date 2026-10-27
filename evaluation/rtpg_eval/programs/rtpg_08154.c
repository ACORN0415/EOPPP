int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 82;
    int v1 = 76;
    int v2 = 7;
    int v3 = 13;
    int v4 = 72;
    int i;
    v4 = v4 * 4;
    if (v4 > v0) { v4 = v0; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
