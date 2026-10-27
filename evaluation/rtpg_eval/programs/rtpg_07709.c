int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 90;
    int v1 = 43;
    int v2 = 53;
    int v3 = 28;
    int i;
    v3 = v3 - v0;
    v1 = 11;
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
