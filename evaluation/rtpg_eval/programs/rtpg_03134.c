int test_func(void) {
    int v0 = 92;
    int v1 = 46;
    int v2 = 45;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v0;
    }
    if (v2 > v0) { v2 = v0; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
