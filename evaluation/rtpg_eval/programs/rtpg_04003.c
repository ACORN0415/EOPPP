int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 81;
    int v1 = 9;
    int v2 = 79;
    int v3 = 8;
    int v4 = 93;
    int v5 = 11;
    int i;
    if (v3 > v5) { v3 = v5; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v4 = v4 % (v0 + 1);
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
