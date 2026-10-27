int test_func(void) {
    int v0 = 78;
    int v1 = 42;
    int v2 = 56;
    int v3 = 84;
    int i;
    v0 = v0 - v3;
    v2 = v2 * 10;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
