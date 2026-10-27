int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 4;
    int v1 = 86;
    int v2 = 41;
    int v3 = 36;
    int i;
    v2 = v2 - v0;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
