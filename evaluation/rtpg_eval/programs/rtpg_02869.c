int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 0;
    int v2 = 60;
    int v3 = 63;
    int v4 = 12;
    int v5 = 52;
    int i;
    v4 = v4 * 2;
    v4 = __helper(v4);
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
