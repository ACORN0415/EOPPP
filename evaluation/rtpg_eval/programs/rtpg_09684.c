int test_func(void) {
    int v0 = 89;
    int v1 = 35;
    int v2 = 0;
    int v3 = 0;
    int v4 = 30;
    int v5 = 95;
    int v6 = 69;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 - v6;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v0;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
