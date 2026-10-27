int test_func(void) {
    int v0 = 9;
    int v1 = 45;
    int v2 = 89;
    int v3 = 37;
    int v4 = 100;
    int i;
    v4 = 46;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
