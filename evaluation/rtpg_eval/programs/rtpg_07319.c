int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 76;
    int v1 = 4;
    int v2 = 64;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
