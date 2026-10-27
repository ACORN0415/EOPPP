int test_func(void) {
    int v0 = 17;
    int v1 = 66;
    int v2 = 57;
    int v3 = 96;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 12; i++) {
        v3 = v3 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
