int test_func(void) {
    int v0 = 58;
    int v1 = 32;
    int v2 = 2;
    int i;
    v2 = v2 * 8;
    v1 = 52;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
