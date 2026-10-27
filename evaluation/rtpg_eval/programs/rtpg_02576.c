int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 3;
    int v2 = 88;
    int i;
    if (v0 > v0) { v0 = v0; }
    int *__p = &v2;
    *__p = *__p + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
