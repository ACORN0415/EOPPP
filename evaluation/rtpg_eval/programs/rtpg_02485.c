int test_func(void) {
    int v0 = 6;
    int v1 = 23;
    int v2 = 74;
    int v3 = 78;
    int v4 = 7;
    int i;
    v4 = v4 - v0;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v4;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
