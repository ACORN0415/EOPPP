int test_func(void) {
    int v0 = 17;
    int v1 = 27;
    int v2 = 11;
    int v3 = 33;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    v0 = 64;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
