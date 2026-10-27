int test_func(void) {
    int v0 = 83;
    int v1 = 80;
    int v2 = 9;
    int v3 = 34;
    int i;
    v3 = v3 * 6;
    v1 = 56;
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
