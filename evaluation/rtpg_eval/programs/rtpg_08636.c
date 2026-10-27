int test_func(void) {
    int v0 = 13;
    int v1 = 62;
    int v2 = 12;
    int v3 = 29;
    int v4 = 52;
    int v5 = 23;
    int i;
    v1 = v1 * 8;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
