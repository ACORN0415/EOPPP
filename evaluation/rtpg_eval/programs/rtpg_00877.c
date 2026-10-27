int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 61;
    int v1 = 38;
    int v2 = 62;
    int v3 = 46;
    int i;
    v3 = v3 - v2;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
