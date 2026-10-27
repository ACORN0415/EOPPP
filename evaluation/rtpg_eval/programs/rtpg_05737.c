int test_func(void) {
    int v0 = 10;
    int v1 = 4;
    int v2 = 100;
    int v3 = 89;
    int v4 = 2;
    int i;
    if (v1 > v0) { v1 = v0; }
    v4 = v4 + v3;
    v1 = v1 * 8;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
