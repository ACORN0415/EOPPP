int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 81;
    int v1 = 50;
    int v2 = 44;
    int v3 = 64;
    int v4 = 78;
    int v5 = 45;
    int v6 = 73;
    int i;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
