int test_func(void) {
    int v0 = 28;
    int v1 = 22;
    int v2 = 72;
    int v3 = 90;
    int v4 = 98;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    v3 = 80;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
