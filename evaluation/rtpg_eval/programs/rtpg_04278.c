int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 0;
    int v2 = 23;
    int v3 = 75;
    int v4 = 85;
    int v5 = 92;
    int i;
    v2 = v2 + v0;
    v5 = v5 * 6;
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
