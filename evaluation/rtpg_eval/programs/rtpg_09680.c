int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 49;
    int v1 = 97;
    int v2 = 62;
    int v3 = 100;
    int i;
    if (v3 > v1) { v3 = v1; }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
