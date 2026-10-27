int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 62;
    int v1 = 60;
    int v2 = 35;
    int v3 = 10;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
