int test_func(void) {
    int v0 = 1;
    int v1 = 39;
    int v2 = 61;
    int v3 = 81;
    int i;
    v3 = v3 * 7;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
