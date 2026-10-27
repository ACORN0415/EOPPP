int test_func(void) {
    int v0 = 41;
    int v1 = 23;
    int v2 = 54;
    int v3 = 30;
    int v4 = 64;
    int v5 = 3;
    int i;
    v5 = 14;
    int *__p = &v5;
    *__p = *__p + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
