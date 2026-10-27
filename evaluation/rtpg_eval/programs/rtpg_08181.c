int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 79;
    int v2 = 91;
    int v3 = 99;
    int v4 = 41;
    int i;
    v4 = 29;
    v3 = v3 + v1;
    v4 = __helper(v4);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v2 = v2 & v3;
    return v0;
}
int main(void) { return test_func(); }
