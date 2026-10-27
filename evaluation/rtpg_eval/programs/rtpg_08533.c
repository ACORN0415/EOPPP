int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 46;
    int v1 = 38;
    int v2 = 11;
    int i;
    v0 = v0 - v1;
    v2 = __helper(v2);
    v2 = v2 ^ v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
