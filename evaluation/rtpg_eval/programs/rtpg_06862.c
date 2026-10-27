int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 18;
    int v2 = 26;
    int v3 = 98;
    int v4 = 79;
    int v5 = 68;
    int i;
    v0 = __helper(v0);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
