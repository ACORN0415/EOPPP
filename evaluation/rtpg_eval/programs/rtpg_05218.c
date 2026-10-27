int test_func(void) {
    int v0 = 21;
    int v1 = 21;
    int v2 = 89;
    int v3 = 76;
    int v4 = 39;
    int v5 = 39;
    int i;
    if (v1 > v3) { v1 = v3; }
    v5 = v5 * 9;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
