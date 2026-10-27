int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 57;
    int v2 = 6;
    int v3 = 41;
    int v4 = 98;
    int v5 = 36;
    int v6 = 66;
    int v7 = 3;
    int i;
    v5 = v5 * 3;
    if (v3 > v3) { v3 = v3; }
    v2 = __helper(v2);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v5 = v5 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
