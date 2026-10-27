int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_153[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 64;
    int v2 = 17;
    int v3 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_153[i] = v3 + i; }
    v0 = __helper(v0);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
