int test_func(void) {
    int v0 = 87;
    int v1 = 74;
    int v2 = 1;
    int v3 = 77;
    int v4 = 16;
    int v5 = 83;
    int v6 = 25;
    int i;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
