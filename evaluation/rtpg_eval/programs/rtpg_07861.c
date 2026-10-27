int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 31;
    int v1 = 35;
    int v2 = 66;
    int i;
    v1 = 20;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v2 = __helper(v2);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
