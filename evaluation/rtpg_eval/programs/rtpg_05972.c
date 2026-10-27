int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 44;
    int v2 = 46;
    int v3 = 36;
    int v4 = 50;
    int v5 = 71;
    int v6 = 78;
    int v7 = 48;
    int i;
    v0 = v0 + v0;
    if (v4 > v0) { v4 = v0; }
    v3 = __helper(v3);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
