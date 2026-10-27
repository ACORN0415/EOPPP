int test_func(void) {
    int v0 = 83;
    int v1 = 52;
    int v2 = 0;
    int v3 = 60;
    int i;
    v3 = 8;
    v2 = v2 * 5;
    v3 = v3 + v1;
    v2 = v2 | v3;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
