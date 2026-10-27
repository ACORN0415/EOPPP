int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 82;
    int v1 = 78;
    int v2 = 65;
    int v3 = 51;
    int i;
    v2 = 91;
    v2 = v2 * 5;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
