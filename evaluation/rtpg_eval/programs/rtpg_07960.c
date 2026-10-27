int test_func(void) {
    int v0 = 47;
    int v1 = 6;
    int v2 = 58;
    int i;
    v1 = v1 + v2;
    v0 = v0 - v2;
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
