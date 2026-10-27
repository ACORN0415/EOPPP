int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 17;
    int v1 = 49;
    int v2 = 66;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v1;
    }
    v2 = v2 + v0;
    v0 = v0 * 8;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
