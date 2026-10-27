int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 89;
    int v2 = 80;
    int v3 = 20;
    int v4 = 1;
    int i;
    v0 = v0 + v1;
    v4 = v4 - v2;
    v3 = v3 * 10;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
