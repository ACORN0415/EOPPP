int test_func(void) {
    int v0 = 95;
    int v1 = 14;
    int v2 = 70;
    int v3 = 99;
    int v4 = 36;
    int i;
    if (v4 > v2) { v4 = v2; }
    v1 = 100;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
