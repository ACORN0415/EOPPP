int test_func(void) {
    int v0 = 92;
    int v1 = 100;
    int v2 = 57;
    int v3 = 55;
    int i;
    v1 = v1 * 3;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
