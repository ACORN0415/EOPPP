int test_func(void) {
    int v0 = 15;
    int v1 = 99;
    int v2 = 71;
    int v3 = 29;
    int v4 = 93;
    int v5 = 54;
    int i;
    v0 = v0 * 7;
    v2 = v2 + v0;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
