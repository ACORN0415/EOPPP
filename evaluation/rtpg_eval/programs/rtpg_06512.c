int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 83;
    int v1 = 48;
    int v2 = 56;
    int v3 = 92;
    int i;
    if (v3 > v3) { v3 = v3; }
    for (i = 0; i < 11; i++) {
        v3 = v3 + v3;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
