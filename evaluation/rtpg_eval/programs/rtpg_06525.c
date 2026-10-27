int test_func(void) {
    int v0 = 38;
    int v1 = 55;
    int v2 = 30;
    int v3 = 32;
    int v4 = 20;
    int i;
    v1 = v1 + v4;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
