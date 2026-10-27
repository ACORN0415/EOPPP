int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 8;
    int v1 = 73;
    int v2 = 80;
    int v3 = 65;
    int v4 = 38;
    int v5 = 91;
    int i;
    v0 = 33;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
