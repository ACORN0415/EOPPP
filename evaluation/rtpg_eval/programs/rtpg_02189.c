int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2189[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 79;
    int v2 = 44;
    int i;
    for (i = 0; i < 10; i++) { __arr_2189[i] = v1 + i; }
    v1 = v1 - v0;
    v1 = 56;
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
