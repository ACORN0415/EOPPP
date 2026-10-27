int test_func(void) {
    int v0 = 42;
    int v1 = 43;
    int v2 = 62;
    int v3 = 13;
    int v4 = 55;
    int v5 = 43;
    int i;
    v5 = 90;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
