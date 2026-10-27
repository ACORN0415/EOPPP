int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 5;
    int v2 = 54;
    int v3 = 24;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v3;
    }
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
