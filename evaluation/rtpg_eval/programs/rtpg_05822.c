int test_func(void) {
    int v0 = 59;
    int v1 = 20;
    int v2 = 51;
    int v3 = 89;
    int v4 = 94;
    int v5 = 75;
    int v6 = 75;
    int v7 = 87;
    int i;
    v4 = v4 * 3;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 | v3;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
