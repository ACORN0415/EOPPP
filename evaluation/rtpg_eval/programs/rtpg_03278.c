int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 91;
    int v1 = 70;
    int v2 = 99;
    int i;
    v0 = v0 + v0;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
