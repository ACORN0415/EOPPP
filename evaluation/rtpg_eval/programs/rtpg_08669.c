int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 26;
    int v1 = 96;
    int v2 = 12;
    int v3 = 33;
    int v4 = 2;
    int v5 = 39;
    int v6 = 9;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v5;
    }
    if (v1 > v2) { v1 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
