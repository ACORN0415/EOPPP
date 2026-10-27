int test_func(void) {
    int v0 = 14;
    int v1 = 17;
    int v2 = 57;
    int v3 = 49;
    int v4 = 16;
    int i;
    v2 = v2 + v4;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
