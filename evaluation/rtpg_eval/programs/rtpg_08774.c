int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8774[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 20;
    int v2 = 97;
    int v3 = 94;
    int v4 = 24;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 10; i++) { __arr_8774[i] = v1 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v4 = __helper(v4);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
