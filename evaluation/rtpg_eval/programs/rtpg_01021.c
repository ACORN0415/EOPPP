int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 58;
    int v1 = 54;
    int v2 = 66;
    int v3 = 29;
    int v4 = 59;
    int v5 = 65;
    int v6 = 86;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v1;
    }
    v5 = __helper(v5);
    v6 = v6 % (v4 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
