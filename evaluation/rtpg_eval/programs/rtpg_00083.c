int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 49;
    int v1 = 7;
    int v2 = 45;
    int v3 = 30;
    int v4 = 18;
    int v5 = 2;
    int v6 = 52;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    v5 = v5 + v2;
    v4 = v4 - v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
