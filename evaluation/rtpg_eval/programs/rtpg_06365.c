int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 60;
    int v1 = 14;
    int v2 = 90;
    int i;
    v0 = 24;
    v0 = v0 & v1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
