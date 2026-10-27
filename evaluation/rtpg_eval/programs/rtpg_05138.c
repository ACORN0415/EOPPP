int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5138[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 92;
    int v2 = 12;
    int v3 = 92;
    int v4 = 20;
    int v5 = 97;
    int v6 = 41;
    int v7 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_5138[i] = v0 + i; }
    if (v3 > v3) { v3 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
