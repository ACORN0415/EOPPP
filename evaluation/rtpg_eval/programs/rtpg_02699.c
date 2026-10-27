int test_func(void) {
    int v0 = 26;
    int v1 = 19;
    int v2 = 97;
    int v3 = 55;
    int v4 = 72;
    int v5 = 60;
    int v6 = 38;
    int i;
    v0 = v0 + v5;
    if (v1 > v5) { v1 = v5; }
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
