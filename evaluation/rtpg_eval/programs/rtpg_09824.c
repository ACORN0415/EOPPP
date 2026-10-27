int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 4;
    int v2 = 53;
    int v3 = 77;
    int v4 = 69;
    int v5 = 16;
    int i;
    v2 = v2 - v5;
    v1 = v1 + v0;
    if (v5 > v0) { v5 = v0; }
    v0 = __helper(v0);
    v0 = v0 ^ v4;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
