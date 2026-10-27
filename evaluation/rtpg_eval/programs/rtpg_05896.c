int test_func(void) {
    int v0 = 45;
    int v1 = 83;
    int v2 = 70;
    int v3 = 34;
    int i;
    v3 = v3 + v2;
    v1 = 30;
    v0 = v0 * 6;
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
