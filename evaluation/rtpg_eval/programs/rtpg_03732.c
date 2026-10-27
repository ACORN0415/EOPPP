int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 43;
    int v2 = 46;
    int v3 = 45;
    int i;
    v3 = 15;
    v0 = v0 * 2;
    v0 = __helper(v0);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
