int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 100;
    int v2 = 19;
    int v3 = 74;
    int i;
    v1 = v1 - v3;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
