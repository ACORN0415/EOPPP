int test_func(void) {
    int v0 = 17;
    int v1 = 10;
    int v2 = 48;
    int v3 = 87;
    int v4 = 47;
    int v5 = 98;
    int v6 = 25;
    int v7 = 49;
    int i;
    if (v5 > v3) { v5 = v3; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    v0 = v0 / (v7 + 1);
    return v0;
}
int main(void) { return test_func(); }
