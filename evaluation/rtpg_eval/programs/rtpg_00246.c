int test_func(void) {
    int v0 = 69;
    int v1 = 26;
    int v2 = 61;
    int v3 = 63;
    int v4 = 71;
    int i;
    v0 = v0 * 7;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
