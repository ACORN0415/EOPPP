int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 30;
    int v1 = 0;
    int v2 = 75;
    int i;
    v1 = v1 - v0;
    v0 = v0 * 5;
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
