int test_func(void) {
    int v0 = 55;
    int v1 = 90;
    int v2 = 32;
    int v3 = 89;
    int v4 = 6;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v4;
    }
    if (v2 > v3) { v2 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
