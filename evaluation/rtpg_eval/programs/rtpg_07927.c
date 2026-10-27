int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 64;
    int v1 = 94;
    int v2 = 51;
    int v3 = 35;
    int v4 = 22;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v3;
    }
    if (v4 > v2) { v4 = v2; }
    v0 = v0 - v2;
    v1 = __helper(v1);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
