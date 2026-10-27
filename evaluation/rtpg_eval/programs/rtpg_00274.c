int test_func(void) {
    int v0 = 30;
    int v1 = 33;
    int v2 = 38;
    int v3 = 63;
    int v4 = 5;
    int v5 = 0;
    int v6 = 86;
    int v7 = 42;
    int i;
    v0 = v0 - v7;
    if (v3 > v2) { v3 = v2; }
    v5 = 18;
    v7 = v7 / (v6 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
