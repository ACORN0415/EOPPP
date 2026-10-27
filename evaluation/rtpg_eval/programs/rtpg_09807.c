int test_func(void) {
    int v0 = 91;
    int v1 = 1;
    int v2 = 3;
    int v3 = 16;
    int v4 = 32;
    int i;
    int *__p = &v1;
    *__p = *__p + 1;
    v1 = v1 | v0;
    return v0;
}
int main(void) { return test_func(); }
