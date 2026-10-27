int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 18;
    int v1 = 73;
    int v2 = 30;
    int v3 = 45;
    int v4 = 2;
    int i;
    v2 = v2 + v3;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
