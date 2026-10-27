int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 16;
    int v2 = 49;
    int v3 = 59;
    int v4 = 43;
    int i;
    v2 = v2 - v4;
    v1 = v1 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
