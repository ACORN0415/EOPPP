int test_func(void) {
    int v0 = 57;
    int v1 = 15;
    int v2 = 73;
    int v3 = 29;
    int v4 = 22;
    int i;
    v0 = v0 * 7;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
