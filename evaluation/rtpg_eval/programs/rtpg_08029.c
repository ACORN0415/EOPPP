int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 88;
    int v1 = 8;
    int v2 = 61;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 - v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
