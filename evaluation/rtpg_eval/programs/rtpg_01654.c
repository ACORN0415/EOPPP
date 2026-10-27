int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 79;
    int v1 = 28;
    int v2 = 31;
    int v3 = 82;
    int v4 = 6;
    int v5 = 5;
    int i;
    v3 = v3 - v1;
    v0 = v0 * 8;
    v3 = v3 + v3;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
