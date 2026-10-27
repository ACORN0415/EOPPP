int test_func(void) {
    int v0 = 74;
    int v1 = 96;
    int v2 = 39;
    int v3 = 72;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    v0 = v0 + v3;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
