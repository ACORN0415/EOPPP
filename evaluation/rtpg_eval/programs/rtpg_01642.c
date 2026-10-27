int test_func(void) {
    int v0 = 41;
    int v1 = 87;
    int v2 = 3;
    int v3 = 35;
    int v4 = 77;
    int v5 = 17;
    int v6 = 79;
    int v7 = 6;
    int i;
    v5 = v5 * 3;
    v6 = v6 + v2;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
