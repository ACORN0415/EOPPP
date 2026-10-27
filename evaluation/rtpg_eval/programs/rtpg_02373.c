int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 34;
    int v2 = 67;
    int v3 = 78;
    int v4 = 50;
    int v5 = 7;
    int i;
    v1 = v1 + v0;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
