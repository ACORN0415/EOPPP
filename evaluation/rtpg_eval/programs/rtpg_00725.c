int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 24;
    int v1 = 38;
    int v2 = 2;
    int v3 = 66;
    int v4 = 98;
    int v5 = 73;
    int i;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
