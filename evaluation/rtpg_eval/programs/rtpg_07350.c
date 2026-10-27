int test_func(void) {
    int v0 = 89;
    int v1 = 32;
    int v2 = 86;
    int v3 = 88;
    int v4 = 42;
    int i;
    v0 = v0 * 8;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
