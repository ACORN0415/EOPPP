int test_func(void) {
    int v0 = 75;
    int v1 = 24;
    int v2 = 32;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = 82;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
