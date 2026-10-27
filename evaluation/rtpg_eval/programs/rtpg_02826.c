int test_func(void) {
    int v0 = 13;
    int v1 = 68;
    int v2 = 42;
    int v3 = 76;
    int v4 = 12;
    int i;
    v3 = v3 - v4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
