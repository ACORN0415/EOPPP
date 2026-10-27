int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 17;
    int v1 = 2;
    int v2 = 66;
    int v3 = 6;
    int v4 = 74;
    int i;
    v3 = v3 - v2;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
