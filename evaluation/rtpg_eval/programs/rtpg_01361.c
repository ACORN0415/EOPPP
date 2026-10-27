int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 9;
    int v2 = 61;
    int v3 = 37;
    int v4 = 78;
    int v5 = 1;
    int v6 = 76;
    int v7 = 92;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
