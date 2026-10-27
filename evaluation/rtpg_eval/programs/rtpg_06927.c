int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 79;
    int v2 = 50;
    int v3 = 44;
    int v4 = 8;
    int v5 = 79;
    int v6 = 89;
    int i;
    v2 = v2 * 10;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
