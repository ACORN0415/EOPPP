int test_func(void) {
    int v0 = 5;
    int v1 = 10;
    int v2 = 87;
    int v3 = 41;
    int v4 = 39;
    int v5 = 28;
    int v6 = 47;
    int v7 = 85;
    int i;
    v7 = v7 * 8;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
