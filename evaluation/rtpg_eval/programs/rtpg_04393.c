int test_func(void) {
    int v0 = 92;
    int v1 = 37;
    int v2 = 50;
    int v3 = 1;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v2;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
