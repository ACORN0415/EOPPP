int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 81;
    int v1 = 62;
    int v2 = 94;
    int v3 = 37;
    int v4 = 64;
    int i;
    v2 = v2 - v1;
    v3 = v3 * 7;
    v2 = __helper(v2);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
