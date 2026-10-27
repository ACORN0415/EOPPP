int test_func(void) {
    int v0 = 70;
    int v1 = 1;
    int v2 = 2;
    int i;
    v1 = v1 - v0;
    v2 = 92;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v2;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
