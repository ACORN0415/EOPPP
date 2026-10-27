int test_func(void) {
    int v0 = 56;
    int v1 = 52;
    int v2 = 77;
    int v3 = 11;
    int i;
    if (v3 > v2) { v3 = v2; }
    v0 = v0 * 10;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
