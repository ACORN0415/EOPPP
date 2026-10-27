int test_func(void) {
    int v0 = 32;
    int v1 = 99;
    int v2 = 82;
    int v3 = 35;
    int i;
    v0 = v0 * 6;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
