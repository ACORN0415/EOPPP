int test_func(void) {
    int v0 = 6;
    int v1 = 89;
    int v2 = 69;
    int v3 = 84;
    int v4 = 46;
    int v5 = 42;
    int v6 = 92;
    int v7 = 91;
    int i;
    if (v3 > v1) { v3 = v1; }
    v3 = 83;
    v3 = v3 * 5;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
