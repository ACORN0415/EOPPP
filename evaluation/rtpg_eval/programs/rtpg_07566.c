int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 22;
    int v1 = 57;
    int v2 = 16;
    int v3 = 73;
    int i;
    v3 = v3 - v0;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
