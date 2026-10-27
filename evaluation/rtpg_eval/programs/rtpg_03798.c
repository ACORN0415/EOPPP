int test_func(void) {
    int v0 = 56;
    int v1 = 46;
    int v2 = 52;
    int v3 = 80;
    int v4 = 2;
    int v5 = 95;
    int v6 = 56;
    int v7 = 7;
    int i;
    v0 = v0 - v2;
    v4 = v4 ^ v6;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
