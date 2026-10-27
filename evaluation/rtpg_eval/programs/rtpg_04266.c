int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 36;
    int v2 = 84;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v2;
    }
    v0 = __helper(v0);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
