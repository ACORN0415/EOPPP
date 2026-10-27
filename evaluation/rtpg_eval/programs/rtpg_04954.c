int test_func(void) {
    int v0 = 34;
    int v1 = 41;
    int v2 = 74;
    int v3 = 50;
    int v4 = 29;
    int v5 = 25;
    int v6 = 91;
    int v7 = 57;
    int i;
    v3 = v3 * 10;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
