int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 76;
    int v1 = 69;
    int v2 = 2;
    int v3 = 10;
    int v4 = 33;
    int v5 = 14;
    int v6 = 26;
    int v7 = 50;
    int i;
    v6 = v6 + v7;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
