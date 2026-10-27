int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 19;
    int v1 = 16;
    int v2 = 65;
    int v3 = 11;
    int v4 = 26;
    int v5 = 23;
    int i;
    v5 = v5 - v0;
    v3 = v3 * 7;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v4;
    }
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
