int test_func(void) {
    int v0 = 32;
    int v1 = 69;
    int v2 = 72;
    int v3 = 52;
    int v4 = 42;
    int v5 = 4;
    int v6 = 6;
    int i;
    if (v3 > v5) { v3 = v5; }
    v1 = v1 * 5;
    v6 = v6 - v3;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
