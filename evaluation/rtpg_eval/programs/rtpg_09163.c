int test_func(void) {
    int v0 = 30;
    int v1 = 42;
    int v2 = 56;
    int v3 = 75;
    int v4 = 28;
    int v5 = 44;
    int v6 = 16;
    int v7 = 85;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = v2 - v3;
    v4 = v4 + v2;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
