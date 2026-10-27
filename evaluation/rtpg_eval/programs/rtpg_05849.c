int test_func(void) {
    int v0 = 4;
    int v1 = 67;
    int v2 = 90;
    int v3 = 88;
    int v4 = 38;
    int v5 = 95;
    int v6 = 27;
    int v7 = 18;
    int i;
    if (v0 > v3) { v0 = v3; }
    v2 = v2 % (v5 + 1);
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
