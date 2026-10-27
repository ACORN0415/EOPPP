int test_func(void) {
    int v0 = 85;
    int v1 = 50;
    int v2 = 31;
    int i;
    v2 = v2 + v1;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
