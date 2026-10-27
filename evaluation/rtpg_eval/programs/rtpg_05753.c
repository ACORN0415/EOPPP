int test_func(void) {
    int v0 = 18;
    int v1 = 94;
    int v2 = 72;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v0;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
