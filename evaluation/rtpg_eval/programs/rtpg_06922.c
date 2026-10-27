int test_func(void) {
    int v0 = 19;
    int v1 = 74;
    int v2 = 13;
    int v3 = 84;
    int i;
    v0 = v0 + v1;
    if (v0 > v2) { v0 = v2; }
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
