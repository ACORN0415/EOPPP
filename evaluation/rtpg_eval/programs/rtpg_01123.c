int test_func(void) {
    int v0 = 41;
    int v1 = 91;
    int v2 = 91;
    int v3 = 2;
    int v4 = 16;
    int v5 = 42;
    int i;
    v1 = v1 - v0;
    v3 = v3 * 9;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
