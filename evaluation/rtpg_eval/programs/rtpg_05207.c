int test_func(void) {
    int v0 = 100;
    int v1 = 53;
    int v2 = 96;
    int v3 = 24;
    int v4 = 66;
    int v5 = 4;
    int v6 = 26;
    int v7 = 85;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v6;
    }
    v1 = v1 - v3;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
