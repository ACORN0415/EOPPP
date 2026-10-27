int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 53;
    int v2 = 11;
    int v3 = 84;
    int i;
    v2 = v2 * 9;
    v2 = v2 - v0;
    v1 = 48;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
