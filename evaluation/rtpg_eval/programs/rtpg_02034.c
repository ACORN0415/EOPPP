int test_func(void) {
    int v0 = 89;
    int v1 = 8;
    int v2 = 9;
    int v3 = 0;
    int v4 = 33;
    int i;
    v0 = 3;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
