int test_func(void) {
    int v0 = 23;
    int v1 = 77;
    int v2 = 66;
    int v3 = 6;
    int v4 = 30;
    int i;
    if (v4 > v0) { v4 = v0; }
    v0 = v0 * 2;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
