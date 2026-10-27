int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 22;
    int v2 = 8;
    int v3 = 94;
    int i;
    v1 = 37;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
