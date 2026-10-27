int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 27;
    int v1 = 100;
    int v2 = 13;
    int i;
    v2 = v2 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
