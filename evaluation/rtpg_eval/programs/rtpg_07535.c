int test_func(void) {
    int v0 = 79;
    int v1 = 35;
    int v2 = 93;
    int i;
    v1 = v1 * 6;
    v2 = v2 + v1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
