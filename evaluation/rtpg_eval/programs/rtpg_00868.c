int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 98;
    int v2 = 58;
    int v3 = 10;
    int v4 = 43;
    int v5 = 93;
    int i;
    v5 = v5 - v4;
    v3 = __helper(v3);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
