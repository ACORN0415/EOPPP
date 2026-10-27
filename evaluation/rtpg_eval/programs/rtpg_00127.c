int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 86;
    int v1 = 46;
    int v2 = 60;
    int i;
    v0 = v0 * 4;
    v0 = v0 - v1;
    v2 = __helper(v2);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
