int test_func(void) {
    int v0 = 56;
    int v1 = 39;
    int v2 = 85;
    int v3 = 77;
    int v4 = 26;
    int v5 = 64;
    int v6 = 70;
    int i;
    if (v6 > v0) { v6 = v0; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v3;
    }
    v2 = v2 ^ v3;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
