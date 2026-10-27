int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 54;
    int v1 = 33;
    int v2 = 22;
    int v3 = 21;
    int v4 = 80;
    int i;
    v3 = v3 * 10;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
