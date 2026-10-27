int test_func(void) {
    int v0 = 69;
    int v1 = 24;
    int v2 = 11;
    int v3 = 57;
    int v4 = 31;
    int v5 = 62;
    int v6 = 56;
    int i;
    if (v1 > v3) { v1 = v3; }
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
