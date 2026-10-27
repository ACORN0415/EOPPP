int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 5;
    int v1 = 37;
    int v2 = 8;
    int v3 = 99;
    int v4 = 44;
    int v5 = 76;
    int i;
    v1 = 80;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 15; i++) {
        v5 = v5 + v3;
    }
    v3 = __helper(v3);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
