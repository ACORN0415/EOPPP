int test_func(void) {
    int v0 = 12;
    int v1 = 51;
    int v2 = 39;
    int v3 = 86;
    int v4 = 94;
    int v5 = 49;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v4;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
