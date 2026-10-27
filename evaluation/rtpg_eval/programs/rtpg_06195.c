int test_func(void) {
    int v0 = 69;
    int v1 = 100;
    int v2 = 77;
    int v3 = 4;
    int v4 = 78;
    int i;
    if (v0 > v4) { v0 = v4; }
    v4 = v4 + v0;
    int *__p = &v4;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
