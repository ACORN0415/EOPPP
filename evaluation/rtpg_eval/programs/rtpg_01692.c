int test_func(void) {
    int v0 = 37;
    int v1 = 44;
    int v2 = 4;
    int v3 = 94;
    int v4 = 79;
    int v5 = 17;
    int v6 = 50;
    int i;
    if (v0 > v6) { v0 = v6; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v1 = v1 & v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
