int test_func(void) {
    int v0 = 90;
    int v1 = 68;
    int v2 = 18;
    int v3 = 79;
    int v4 = 14;
    int i;
    v2 = v2 + v2;
    int *__p = &v1;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v3 = v3 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
