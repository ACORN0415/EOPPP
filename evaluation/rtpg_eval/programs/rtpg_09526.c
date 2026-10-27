int test_func(void) {
    int v0 = 1;
    int v1 = 86;
    int v2 = 69;
    int v3 = 17;
    int v4 = 72;
    int i;
    v4 = 66;
    v3 = v3 + v3;
    if (v3 > v0) { v3 = v0; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
