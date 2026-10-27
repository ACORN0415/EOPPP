int test_func(void) {
    int v0 = 84;
    int v1 = 21;
    int v2 = 10;
    int v3 = 89;
    int v4 = 0;
    int i;
    v4 = v4 * 5;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
