int test_func(void) {
    int v0 = 84;
    int v1 = 50;
    int v2 = 38;
    int v3 = 48;
    int v4 = 35;
    int v5 = 34;
    int v6 = 32;
    int v7 = 70;
    int i;
    v4 = 41;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v3;
    }
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
