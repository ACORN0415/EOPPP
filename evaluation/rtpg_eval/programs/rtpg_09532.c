int test_func(void) {
    int v0 = 85;
    int v1 = 8;
    int v2 = 11;
    int v3 = 53;
    int i;
    v0 = v0 * 3;
    v3 = 12;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
