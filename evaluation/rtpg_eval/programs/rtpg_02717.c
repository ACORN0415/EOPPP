int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 46;
    int v1 = 66;
    int v2 = 14;
    int i;
    v1 = 12;
    v1 = v1 - v0;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 | v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
