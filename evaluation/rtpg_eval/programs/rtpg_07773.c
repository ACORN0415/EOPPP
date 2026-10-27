int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 67;
    int v1 = 44;
    int v2 = 30;
    int v3 = 67;
    int v4 = 8;
    int v5 = 17;
    int v6 = 47;
    int v7 = 69;
    int i;
    v7 = 78;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
