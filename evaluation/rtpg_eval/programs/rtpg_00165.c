int test_func(void) {
    int v0 = 21;
    int v1 = 67;
    int v2 = 88;
    int v3 = 0;
    int v4 = 19;
    int v5 = 92;
    int v6 = 2;
    int i;
    v3 = v3 * 4;
    v4 = 68;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
