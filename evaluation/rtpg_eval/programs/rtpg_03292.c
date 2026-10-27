int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 25;
    int v2 = 69;
    int v3 = 22;
    int v4 = 59;
    int v5 = 45;
    int v6 = 88;
    int i;
    v6 = v6 * 2;
    v1 = v1 - v0;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
