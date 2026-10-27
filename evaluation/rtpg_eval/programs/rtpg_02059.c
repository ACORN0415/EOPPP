int test_func(void) {
    int v0 = 94;
    int v1 = 85;
    int v2 = 88;
    int v3 = 31;
    int v4 = 15;
    int v5 = 3;
    int i;
    v3 = v3 * 2;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
