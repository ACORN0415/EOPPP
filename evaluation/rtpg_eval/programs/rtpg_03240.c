int test_func(void) {
    int v0 = 93;
    int v1 = 45;
    int v2 = 66;
    int v3 = 37;
    int v4 = 84;
    int v5 = 21;
    int v6 = 27;
    int i;
    v0 = v0 + v3;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v5;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
