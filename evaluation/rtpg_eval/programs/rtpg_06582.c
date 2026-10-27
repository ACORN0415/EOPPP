int test_func(void) {
    int v0 = 0;
    int v1 = 12;
    int v2 = 50;
    int v3 = 95;
    int v4 = 96;
    int i;
    v2 = v2 - v4;
    int *__p = &v4;
    *__p = *__p + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
