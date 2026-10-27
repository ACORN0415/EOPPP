int test_func(void) {
    int v0 = 74;
    int v1 = 16;
    int v2 = 24;
    int v3 = 69;
    int v4 = 65;
    int v5 = 57;
    int i;
    v2 = 89;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
