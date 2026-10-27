int test_func(void) {
    int v0 = 78;
    int v1 = 59;
    int v2 = 31;
    int v3 = 18;
    int i;
    v0 = v0 - v2;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 * 9;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
