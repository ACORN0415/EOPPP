int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 13;
    int v1 = 40;
    int v2 = 10;
    int v3 = 85;
    int v4 = 27;
    int v5 = 48;
    int v6 = 36;
    int i;
    v0 = v0 * 6;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
