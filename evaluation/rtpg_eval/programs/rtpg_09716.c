int test_func(void) {
    int v0 = 11;
    int v1 = 48;
    int v2 = 21;
    int v3 = 14;
    int v4 = 2;
    int v5 = 98;
    int v6 = 19;
    int v7 = 52;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    v6 = v6 | v3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
