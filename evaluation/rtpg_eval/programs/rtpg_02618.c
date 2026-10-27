int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 10;
    int v2 = 82;
    int v3 = 54;
    int v4 = 55;
    int v5 = 26;
    int v6 = 51;
    int v7 = 51;
    int i;
    if (v1 > v2) { v1 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
