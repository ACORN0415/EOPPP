int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 91;
    int v2 = 65;
    int i;
    v2 = v2 + v2;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
