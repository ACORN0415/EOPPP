int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 46;
    int v2 = 51;
    int v3 = 81;
    int v4 = 15;
    int i;
    v4 = v4 - v2;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
