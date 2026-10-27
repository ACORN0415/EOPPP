int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 57;
    int v2 = 37;
    int v3 = 23;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
