int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 39;
    int v2 = 95;
    int v3 = 68;
    int v4 = 33;
    int i;
    v3 = v3 - v1;
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
