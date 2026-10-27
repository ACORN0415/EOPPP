int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 66;
    int v1 = 92;
    int v2 = 30;
    int v3 = 85;
    int v4 = 86;
    int v5 = 3;
    int v6 = 32;
    int i;
    v4 = v4 * 9;
    v4 = 45;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
