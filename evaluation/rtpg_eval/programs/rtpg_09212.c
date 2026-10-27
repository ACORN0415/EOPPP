int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 6;
    int v2 = 79;
    int v3 = 1;
    int v4 = 7;
    int i;
    v1 = v1 - v0;
    if (v3 > v0) { v3 = v0; }
    v0 = __helper(v0);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
