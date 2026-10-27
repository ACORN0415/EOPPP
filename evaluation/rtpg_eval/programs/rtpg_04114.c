int test_func(void) {
    int v0 = 0;
    int v1 = 68;
    int v2 = 60;
    int v3 = 74;
    int v4 = 10;
    int v5 = 10;
    int v6 = 58;
    int v7 = 62;
    int i;
    v7 = v7 + v0;
    v0 = v0 * 4;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
