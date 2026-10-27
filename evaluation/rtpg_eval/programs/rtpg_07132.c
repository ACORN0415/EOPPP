int test_func(void) {
    int v0 = 88;
    int v1 = 62;
    int v2 = 17;
    int v3 = 15;
    int v4 = 7;
    int v5 = 59;
    int i;
    v4 = v4 - v3;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
