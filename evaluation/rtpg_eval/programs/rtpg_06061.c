int test_func(void) {
    int v0 = 16;
    int v1 = 95;
    int v2 = 77;
    int v3 = 71;
    int v4 = 89;
    int i;
    v3 = 39;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
