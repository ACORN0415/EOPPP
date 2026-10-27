int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 64;
    int v1 = 61;
    int v2 = 25;
    int i;
    v2 = 10;
    v2 = v2 + v2;
    v1 = v1 * 5;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
