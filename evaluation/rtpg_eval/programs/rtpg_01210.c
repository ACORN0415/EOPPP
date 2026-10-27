int test_func(void) {
    int v0 = 5;
    int v1 = 23;
    int v2 = 40;
    int i;
    v2 = v2 + v2;
    v2 = v2 * 9;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v1;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
