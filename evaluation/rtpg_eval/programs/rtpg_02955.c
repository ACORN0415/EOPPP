int test_func(void) {
    int v0 = 36;
    int v1 = 72;
    int v2 = 63;
    int v3 = 16;
    int v4 = 69;
    int v5 = 70;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v3;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
