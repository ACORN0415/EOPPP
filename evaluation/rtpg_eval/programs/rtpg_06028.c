int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 52;
    int v1 = 86;
    int v2 = 49;
    int v3 = 2;
    int v4 = 90;
    int v5 = 81;
    int v6 = 54;
    int v7 = 77;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 17; i++) {
        v0 = v0 + v2;
    }
    v2 = 52;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
