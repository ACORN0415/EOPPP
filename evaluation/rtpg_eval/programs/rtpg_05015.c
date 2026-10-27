int test_func(void) {
    int v0 = 97;
    int v1 = 19;
    int v2 = 35;
    int i;
    v0 = v0 + v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
