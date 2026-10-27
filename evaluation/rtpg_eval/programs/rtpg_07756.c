int test_func(void) {
    int v0 = 59;
    int v1 = 34;
    int v2 = 62;
    int v3 = 33;
    int v4 = 0;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 * 4;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
