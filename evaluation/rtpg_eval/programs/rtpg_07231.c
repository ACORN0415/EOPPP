int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 89;
    int v2 = 67;
    int i;
    if (v2 > v2) { v2 = v2; }
    v2 = 51;
    v2 = __helper(v2);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
