int test_func(void) {
    int v0 = 36;
    int v1 = 9;
    int v2 = 37;
    int v3 = 58;
    int v4 = 15;
    int i;
    v2 = 99;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v3;
    }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
