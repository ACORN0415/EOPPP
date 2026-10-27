int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 19;
    int v2 = 26;
    int v3 = 39;
    int v4 = 4;
    int i;
    v0 = v0 * 5;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
