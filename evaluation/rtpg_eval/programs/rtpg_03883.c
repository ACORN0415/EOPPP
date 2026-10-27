int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 99;
    int v1 = 29;
    int v2 = 44;
    int i;
    v2 = 61;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __helper(v0);
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
