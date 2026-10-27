int test_func(void) {
    int v0 = 19;
    int v1 = 15;
    int v2 = 10;
    int v3 = 32;
    int i;
    v2 = v2 * 4;
    v2 = v2 + v0;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
