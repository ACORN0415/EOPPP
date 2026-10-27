int test_func(void) {
    int v0 = 33;
    int v1 = 35;
    int v2 = 60;
    int v3 = 97;
    int v4 = 62;
    int v5 = 43;
    int v6 = 48;
    int v7 = 84;
    int i;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v1;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
