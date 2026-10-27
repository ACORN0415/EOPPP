int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 55;
    int v1 = 76;
    int v2 = 52;
    int v3 = 76;
    int v4 = 4;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v1;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
