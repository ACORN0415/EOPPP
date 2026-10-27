int test_func(void) {
    int v0 = 78;
    int v1 = 90;
    int v2 = 18;
    int v3 = 32;
    int v4 = 67;
    int v5 = 79;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v5;
    }
    v4 = v4 + v0;
    if (v0 > v4) { v0 = v4; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
