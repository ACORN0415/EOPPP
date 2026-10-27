int test_func(void) {
    int v0 = 73;
    int v1 = 71;
    int v2 = 61;
    int v3 = 58;
    int v4 = 92;
    int v5 = 54;
    int v6 = 88;
    int i;
    v0 = v0 - v1;
    if (v5 > v0) { v5 = v0; }
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
