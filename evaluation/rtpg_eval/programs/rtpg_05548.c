int test_func(void) {
    int v0 = 45;
    int v1 = 87;
    int v2 = 70;
    int i;
    if (v0 > v0) { v0 = v0; }
    v2 = v2 - v1;
    v2 = v2 + v1;
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
