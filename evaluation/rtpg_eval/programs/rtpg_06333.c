int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 16;
    int v1 = 54;
    int v2 = 53;
    int v3 = 5;
    int i;
    if (v3 > v3) { v3 = v3; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
