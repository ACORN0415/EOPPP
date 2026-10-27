int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 60;
    int v2 = 58;
    int v3 = 61;
    int v4 = 85;
    int v5 = 92;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v1;
    }
    v5 = v5 | v2;
    v4 = __helper(v4);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
