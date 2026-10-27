int test_func(void) {
    int v0 = 42;
    int v1 = 67;
    int v2 = 86;
    int v3 = 61;
    int v4 = 41;
    int v5 = 17;
    int v6 = 94;
    int v7 = 98;
    int i;
    v0 = 71;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v1;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
