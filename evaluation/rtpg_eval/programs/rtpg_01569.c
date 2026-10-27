int test_func(void) {
    int v0 = 98;
    int v1 = 77;
    int v2 = 81;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    v0 = v0 + v1;
    if (v1 > v2) { v1 = v2; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
