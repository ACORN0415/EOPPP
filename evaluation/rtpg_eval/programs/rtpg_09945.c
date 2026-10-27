int test_func(void) {
    int v0 = 35;
    int v1 = 39;
    int v2 = 41;
    int v3 = 28;
    int v4 = 26;
    int v5 = 24;
    int v6 = 99;
    int i;
    v6 = v6 * 9;
    int *__p = &v3;
    *__p = *__p + 1;
    v0 = v0 ^ v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
