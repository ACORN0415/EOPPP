int test_func(void) {
    int v0 = 94;
    int v1 = 99;
    int v2 = 20;
    int v3 = 47;
    int v4 = 84;
    int v5 = 79;
    int v6 = 25;
    int v7 = 66;
    int i;
    v3 = v3 * 10;
    v6 = v6 / (v7 + 1);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
