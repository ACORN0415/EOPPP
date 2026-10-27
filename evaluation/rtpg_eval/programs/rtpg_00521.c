int test_func(void) {
    int v0 = 11;
    int v1 = 43;
    int v2 = 23;
    int v3 = 13;
    int v4 = 98;
    int v5 = 71;
    int v6 = 83;
    int i;
    v0 = 83;
    if (v6 > v5) { v6 = v5; }
    v0 = v0 + v2;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
