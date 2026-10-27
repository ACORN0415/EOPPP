int test_func(void) {
    int v0 = 26;
    int v1 = 49;
    int v2 = 70;
    int v3 = 69;
    int v4 = 63;
    int v5 = 44;
    int v6 = 89;
    int v7 = 98;
    int i;
    if (v6 > v4) { v6 = v4; }
    for (i = 0; i < 17; i++) {
        v7 = v7 + v7;
    }
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
