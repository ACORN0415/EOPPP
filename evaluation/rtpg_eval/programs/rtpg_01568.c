int test_func(void) {
    int v0 = 59;
    int v1 = 0;
    int v2 = 61;
    int v3 = 71;
    int v4 = 93;
    int v5 = 28;
    int v6 = 21;
    int i;
    v1 = v1 * 2;
    v4 = 93;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
