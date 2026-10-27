int test_func(void) {
    int v0 = 71;
    int v1 = 63;
    int v2 = 12;
    int v3 = 69;
    int v4 = 84;
    int v5 = 41;
    int i;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v4;
    }
    v0 = 14;
    int *__p = &v1;
    *__p = *__p + 1;
    v0 = v0 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
