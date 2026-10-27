int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 35;
    int v1 = 12;
    int v2 = 33;
    int v3 = 35;
    int v4 = 53;
    int v5 = 57;
    int v6 = 78;
    int v7 = 57;
    int i;
    v1 = 21;
    v1 = v1 / (v4 + 1);
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
