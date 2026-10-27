int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 11;
    int v2 = 73;
    int v3 = 91;
    int v4 = 77;
    int v5 = 91;
    int v6 = 92;
    int i;
    v6 = v6 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
