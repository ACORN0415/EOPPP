int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 35;
    int v2 = 60;
    int i;
    v1 = v1 * 9;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
