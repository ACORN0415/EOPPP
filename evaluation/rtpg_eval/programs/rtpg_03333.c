int test_func(void) {
    int v0 = 40;
    int v1 = 8;
    int v2 = 13;
    int v3 = 63;
    int v4 = 10;
    int v5 = 96;
    int v6 = 10;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v3;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
