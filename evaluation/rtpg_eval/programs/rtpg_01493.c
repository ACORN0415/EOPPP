int test_func(void) {
    int v0 = 0;
    int v1 = 77;
    int v2 = 61;
    int v3 = 41;
    int v4 = 11;
    int v5 = 58;
    int v6 = 29;
    int v7 = 16;
    int i;
    v2 = v2 * 9;
    v0 = v0 + v5;
    v3 = v3 - v0;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
