int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 67;
    int v2 = 0;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v1;
    }
    v1 = 63;
    v1 = v1 * 10;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
