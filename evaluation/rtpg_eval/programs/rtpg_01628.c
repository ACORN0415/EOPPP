int test_func(void) {
    int v0 = 22;
    int v1 = 84;
    int v2 = 93;
    int v3 = 92;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v3;
    }
    v0 = v0 + v1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
