int test_func(void) {
    int v0 = 90;
    int v1 = 14;
    int v2 = 71;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    v1 = v1 | v2;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
