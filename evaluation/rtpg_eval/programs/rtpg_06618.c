int test_func(void) {
    int v0 = 37;
    int v1 = 17;
    int v2 = 28;
    int v3 = 23;
    int v4 = 36;
    int v5 = 8;
    int v6 = 54;
    int i;
    v0 = v0 - v5;
    if (v4 > v5) { v4 = v5; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
