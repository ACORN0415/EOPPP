int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 1;
    int v2 = 93;
    int v3 = 19;
    int v4 = 95;
    int v5 = 62;
    int v6 = 92;
    int v7 = 48;
    int i;
    v5 = 20;
    if (v2 > v7) { v2 = v7; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v6 = __helper(v6);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
