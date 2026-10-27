int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 0;
    int v1 = 79;
    int v2 = 86;
    int v3 = 55;
    int v4 = 29;
    int i;
    if (v2 > v3) { v2 = v3; }
    v1 = v1 * 3;
    v3 = __helper(v3);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
