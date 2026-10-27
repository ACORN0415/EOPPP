int test_func(void) {
    int v0 = 89;
    int v1 = 64;
    int v2 = 23;
    int v3 = 3;
    int v4 = 96;
    int v5 = 61;
    int v6 = 35;
    int i;
    v0 = 21;
    if (v5 > v3) { v5 = v3; }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
