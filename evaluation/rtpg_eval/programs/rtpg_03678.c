int test_func(void) {
    int v0 = 79;
    int v1 = 71;
    int v2 = 28;
    int v3 = 39;
    int v4 = 96;
    int v5 = 43;
    int v6 = 9;
    int v7 = 16;
    int i;
    v1 = 32;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
