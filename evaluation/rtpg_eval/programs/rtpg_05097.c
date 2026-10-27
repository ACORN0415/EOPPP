int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 69;
    int v1 = 85;
    int v2 = 16;
    int v3 = 52;
    int v4 = 58;
    int i;
    v2 = v2 - v4;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
