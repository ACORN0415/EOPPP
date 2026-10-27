int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 11;
    int v1 = 52;
    int v2 = 8;
    int v3 = 82;
    int v4 = 23;
    int i;
    v1 = v1 + v0;
    v3 = __helper(v3);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v4 = v4 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
