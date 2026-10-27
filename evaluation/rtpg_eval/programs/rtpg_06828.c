int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 75;
    int v2 = 24;
    int i;
    v2 = 14;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
