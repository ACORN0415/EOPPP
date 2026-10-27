int test_func(void) {
    int v0 = 93;
    int v1 = 41;
    int v2 = 100;
    int v3 = 97;
    int v4 = 60;
    int i;
    v3 = v3 - v2;
    v4 = v4 * 6;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
