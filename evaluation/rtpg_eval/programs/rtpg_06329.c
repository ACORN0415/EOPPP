int test_func(void) {
    int v0 = 83;
    int v1 = 95;
    int v2 = 89;
    int v3 = 19;
    int v4 = 15;
    int v5 = 51;
    int i;
    if (v5 > v5) { v5 = v5; }
    for (i = 0; i < 5; i++) {
        v5 = v5 + v5;
    }
    v3 = 54;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
