int test_func(void) {
    int v0 = 41;
    int v1 = 18;
    int v2 = 26;
    int v3 = 62;
    int v4 = 66;
    int v5 = 30;
    int v6 = 95;
    int i;
    if (v3 > v1) { v3 = v1; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
