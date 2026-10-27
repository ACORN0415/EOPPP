int test_func(void) {
    int v0 = 33;
    int v1 = 23;
    int v2 = 83;
    int v3 = 83;
    int v4 = 90;
    int v5 = 97;
    int i;
    v0 = 79;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
