int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 70;
    int v2 = 92;
    int v3 = 60;
    int v4 = 81;
    int i;
    v0 = v0 - v1;
    v3 = 94;
    v1 = __helper(v1);
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
