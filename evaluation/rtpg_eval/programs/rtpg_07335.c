int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 21;
    int v2 = 46;
    int v3 = 33;
    int v4 = 21;
    int i;
    v4 = v4 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
