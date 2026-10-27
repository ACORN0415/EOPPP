int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 4;
    int v1 = 51;
    int v2 = 4;
    int v3 = 55;
    int v4 = 82;
    int v5 = 2;
    int i;
    v1 = 49;
    v2 = v2 | v0;
    v5 = __helper(v5);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
