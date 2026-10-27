int test_func(void) {
    int v0 = 81;
    int v1 = 66;
    int v2 = 62;
    int v3 = 13;
    int v4 = 61;
    int i;
    v1 = v1 + v4;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
