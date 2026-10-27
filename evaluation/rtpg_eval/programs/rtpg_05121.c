int test_func(void) {
    int v0 = 36;
    int v1 = 62;
    int v2 = 53;
    int v3 = 35;
    int v4 = 58;
    int v5 = 27;
    int v6 = 20;
    int v7 = 13;
    int i;
    v7 = v7 * 6;
    v4 = 74;
    v7 = v7 + v7;
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
