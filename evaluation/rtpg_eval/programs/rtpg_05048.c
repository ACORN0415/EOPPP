int test_func(void) {
    int v0 = 76;
    int v1 = 0;
    int v2 = 77;
    int v3 = 88;
    int v4 = 74;
    int v5 = 80;
    int i;
    v5 = v5 - v4;
    v3 = v3 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
