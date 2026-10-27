int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 87;
    int v2 = 69;
    int v3 = 37;
    int v4 = 79;
    int i;
    v0 = v0 - v4;
    v2 = 66;
    int *__p = &v0;
    *__p = *__p + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
