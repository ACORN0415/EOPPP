int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 97;
    int v1 = 15;
    int v2 = 77;
    int v3 = 68;
    int v4 = 69;
    int i;
    if (v3 > v0) { v3 = v0; }
    v0 = __helper(v0);
    v1 = v1 & v3;
    return v0;
}
int main(void) { return test_func(); }
