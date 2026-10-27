int test_func(void) {
    int v0 = 23;
    int v1 = 96;
    int v2 = 14;
    int v3 = 44;
    int v4 = 29;
    int v5 = 13;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 ^ v5;
    return v0;
}
int main(void) { return test_func(); }
