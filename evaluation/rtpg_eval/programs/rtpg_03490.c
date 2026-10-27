int test_func(void) {
    int v0 = 96;
    int v1 = 86;
    int v2 = 0;
    int v3 = 88;
    int v4 = 4;
    int v5 = 97;
    int v6 = 72;
    int i;
    v1 = v1 + v4;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
