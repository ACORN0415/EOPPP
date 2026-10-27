int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 18;
    int v1 = 95;
    int v2 = 47;
    int v3 = 44;
    int i;
    v2 = v2 - v3;
    v3 = 63;
    v1 = __helper(v1);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v3 = v3 & v0;
    return v0;
}
int main(void) { return test_func(); }
