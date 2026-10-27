int test_func(void) {
    int v0 = 31;
    int v1 = 35;
    int v2 = 98;
    int v3 = 13;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
