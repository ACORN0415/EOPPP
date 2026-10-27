int test_func(void) {
    int v0 = 96;
    int v1 = 0;
    int v2 = 63;
    int v3 = 4;
    int v4 = 72;
    int v5 = 36;
    int v6 = 40;
    int i;
    v6 = v6 * 7;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v3;
    }
    v5 = 79;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
