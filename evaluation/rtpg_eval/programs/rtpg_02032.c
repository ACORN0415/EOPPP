int test_func(void) {
    int v0 = 80;
    int v1 = 99;
    int v2 = 61;
    int v3 = 57;
    int v4 = 25;
    int v5 = 41;
    int i;
    v3 = v3 + v4;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v5;
    }
    v1 = v1 - v5;
    int *__p = &v3;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
