int test_func(void) {
    int v0 = 10;
    int v1 = 4;
    int v2 = 19;
    int v3 = 34;
    int v4 = 7;
    int v5 = 4;
    int i;
    v4 = v4 * 7;
    v0 = v0 + v1;
    v3 = v3 - v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
