int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 55;
    int v1 = 5;
    int v2 = 5;
    int i;
    v1 = v1 * 4;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
