int test_func(void) {
    int v0 = 15;
    int v1 = 14;
    int v2 = 14;
    int v3 = 14;
    int i;
    v2 = v2 * 7;
    v3 = 34;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
