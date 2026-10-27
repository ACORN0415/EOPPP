int test_func(void) {
    int v0 = 19;
    int v1 = 26;
    int v2 = 52;
    int v3 = 17;
    int v4 = 70;
    int v5 = 64;
    int v6 = 27;
    int v7 = 47;
    int i;
    if (v6 > v0) { v6 = v0; }
    v5 = v5 + v0;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
