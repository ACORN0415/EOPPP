int test_func(void) {
    int v0 = 42;
    int v1 = 56;
    int v2 = 65;
    int v3 = 47;
    int i;
    if (v2 > v2) { v2 = v2; }
    v3 = v3 / (v2 + 1);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
