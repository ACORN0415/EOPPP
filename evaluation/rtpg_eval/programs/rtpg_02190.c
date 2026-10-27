int test_func(void) {
    int v0 = 91;
    int v1 = 31;
    int v2 = 55;
    int v3 = 35;
    int v4 = 14;
    int v5 = 21;
    int v6 = 21;
    int i;
    for (i = 0; i < 13; i++) {
        v6 = v6 + v2;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
