int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 3;
    int v2 = 47;
    int v3 = 86;
    int v4 = 79;
    int i;
    if (v3 > v3) { v3 = v3; }
    v3 = v3 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
