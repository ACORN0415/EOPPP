int test_func(void) {
    int v0 = 14;
    int v1 = 37;
    int v2 = 54;
    int i;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v2 = v2 % (v0 + 1);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
