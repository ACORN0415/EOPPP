int test_func(void) {
    int v0 = 2;
    int v1 = 50;
    int v2 = 27;
    int v3 = 74;
    int v4 = 49;
    int v5 = 0;
    int v6 = 87;
    int i;
    if (v0 > v4) { v0 = v4; }
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
