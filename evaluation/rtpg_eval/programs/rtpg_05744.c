int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 14;
    int v2 = 10;
    int v3 = 80;
    int i;
    v3 = v3 * 10;
    if (v0 > v2) { v0 = v2; }
    v3 = v3 + v3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
