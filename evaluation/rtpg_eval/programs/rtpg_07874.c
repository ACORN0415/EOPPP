int test_func(void) {
    int v0 = 6;
    int v1 = 87;
    int v2 = 14;
    int v3 = 86;
    int v4 = 68;
    int i;
    v2 = v2 - v3;
    int *__p = &v4;
    *__p = *__p + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
