int test_func(void) {
    int v0 = 18;
    int v1 = 24;
    int v2 = 47;
    int v3 = 42;
    int i;
    v2 = v2 * 9;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
