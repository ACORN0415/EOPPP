int test_func(void) {
    int v0 = 21;
    int v1 = 92;
    int v2 = 28;
    int v3 = 67;
    int v4 = 81;
    int v5 = 22;
    int v6 = 17;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
