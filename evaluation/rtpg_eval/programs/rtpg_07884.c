int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 89;
    int v2 = 65;
    int v3 = 66;
    int v4 = 41;
    int i;
    v1 = 95;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v4;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
