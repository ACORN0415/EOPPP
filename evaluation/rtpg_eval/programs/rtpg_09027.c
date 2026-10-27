int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 72;
    int v1 = 36;
    int v2 = 39;
    int v3 = 46;
    int v4 = 86;
    int v5 = 94;
    int i;
    v2 = v2 * 4;
    v5 = v5 + v2;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
