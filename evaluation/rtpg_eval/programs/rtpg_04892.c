int test_func(void) {
    int v0 = 15;
    int v1 = 68;
    int v2 = 43;
    int v3 = 26;
    int v4 = 89;
    int v5 = 37;
    int v6 = 14;
    int v7 = 14;
    int i;
    v1 = v1 + v2;
    if (v7 > v3) { v7 = v3; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
