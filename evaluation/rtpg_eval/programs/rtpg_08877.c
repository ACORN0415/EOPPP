int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 18;
    int v2 = 47;
    int v3 = 91;
    int v4 = 52;
    int i;
    v3 = v3 - v1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
