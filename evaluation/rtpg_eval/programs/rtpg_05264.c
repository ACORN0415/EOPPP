int test_func(void) {
    int v0 = 15;
    int v1 = 40;
    int v2 = 97;
    int v3 = 62;
    int v4 = 10;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    v3 = 56;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
