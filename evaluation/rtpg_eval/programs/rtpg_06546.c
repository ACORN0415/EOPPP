int test_func(void) {
    int v0 = 81;
    int v1 = 21;
    int v2 = 27;
    int i;
    v1 = v1 * 4;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
