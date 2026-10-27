int test_func(void) {
    int v0 = 48;
    int v1 = 19;
    int v2 = 21;
    int v3 = 16;
    int v4 = 42;
    int v5 = 3;
    int v6 = 48;
    int v7 = 79;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v3;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
