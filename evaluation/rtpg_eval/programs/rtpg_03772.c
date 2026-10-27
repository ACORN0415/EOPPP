int test_func(void) {
    int v0 = 92;
    int v1 = 85;
    int v2 = 61;
    int v3 = 33;
    int v4 = 37;
    int i;
    v0 = v0 - v3;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    v1 = 78;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
