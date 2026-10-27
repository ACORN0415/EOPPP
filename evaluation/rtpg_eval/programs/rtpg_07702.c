int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 27;
    int v2 = 99;
    int v3 = 71;
    int v4 = 97;
    int v5 = 26;
    int v6 = 98;
    int i;
    v6 = 77;
    v0 = __helper(v0);
    v2 = v2 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
