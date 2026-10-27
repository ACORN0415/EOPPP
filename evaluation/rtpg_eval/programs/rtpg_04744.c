int test_func(void) {
    int v0 = 87;
    int v1 = 98;
    int v2 = 89;
    int v3 = 42;
    int v4 = 47;
    int v5 = 84;
    int v6 = 34;
    int i;
    v2 = v2 - v1;
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
