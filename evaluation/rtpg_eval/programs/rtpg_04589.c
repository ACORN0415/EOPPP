int test_func(void) {
    int v0 = 52;
    int v1 = 54;
    int v2 = 45;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v0;
    }
    v0 = 80;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
