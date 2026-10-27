int test_func(void) {
    int v0 = 6;
    int v1 = 8;
    int v2 = 21;
    int v3 = 9;
    int v4 = 68;
    int i;
    v0 = v0 * 7;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
