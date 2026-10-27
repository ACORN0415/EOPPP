int test_func(void) {
    int v0 = 70;
    int v1 = 27;
    int v2 = 79;
    int v3 = 99;
    int v4 = 72;
    int v5 = 96;
    int i;
    if (v4 > v4) { v4 = v4; }
    v1 = v1 ^ v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
