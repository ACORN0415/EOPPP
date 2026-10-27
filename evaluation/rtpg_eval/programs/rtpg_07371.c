int test_func(void) {
    int v0 = 95;
    int v1 = 21;
    int v2 = 71;
    int i;
    v1 = v1 * 6;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
