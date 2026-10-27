int test_func(void) {
    int v0 = 36;
    int v1 = 66;
    int v2 = 32;
    int v3 = 33;
    int v4 = 1;
    int v5 = 88;
    int i;
    v0 = v0 + v1;
    v5 = v5 - v4;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
