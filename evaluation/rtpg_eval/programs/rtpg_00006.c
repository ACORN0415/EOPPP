int test_func(void) {
    int v0 = 0;
    int v1 = 33;
    int v2 = 45;
    int v3 = 63;
    int v4 = 76;
    int v5 = 58;
    int v6 = 32;
    int v7 = 0;
    int i;
    if (v1 > v7) { v1 = v7; }
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
