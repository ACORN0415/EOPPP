int test_func(void) {
    int v0 = 62;
    int v1 = 62;
    int v2 = 59;
    int v3 = 39;
    int v4 = 58;
    int v5 = 33;
    int v6 = 25;
    int i;
    v5 = v5 + v3;
    v5 = v5 - v1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
