int test_func(void) {
    int v0 = 35;
    int v1 = 99;
    int v2 = 94;
    int v3 = 21;
    int v4 = 24;
    int v5 = 32;
    int i;
    v2 = v2 * 5;
    v5 = v5 + v1;
    v2 = v2 / (v0 + 1);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
