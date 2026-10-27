int test_func(void) {
    int v0 = 35;
    int v1 = 66;
    int v2 = 16;
    int v3 = 60;
    int v4 = 64;
    int v5 = 55;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 * 8;
    v1 = 99;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
