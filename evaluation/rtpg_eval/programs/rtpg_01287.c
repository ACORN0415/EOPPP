int test_func(void) {
    int v0 = 87;
    int v1 = 50;
    int v2 = 2;
    int v3 = 66;
    int v4 = 40;
    int v5 = 65;
    int v6 = 93;
    int i;
    v5 = v5 * 4;
    v0 = v0 + v5;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
