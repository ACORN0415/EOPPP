int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 18;
    int v2 = 71;
    int v3 = 89;
    int i;
    v2 = v2 - v3;
    v3 = v3 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
