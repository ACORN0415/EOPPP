int test_func(void) {
    int v0 = 42;
    int v1 = 48;
    int v2 = 98;
    int v3 = 33;
    int v4 = 77;
    int v5 = 41;
    int v6 = 21;
    int i;
    v2 = 26;
    v0 = v0 ^ v3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
