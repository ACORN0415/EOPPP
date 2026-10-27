int test_func(void) {
    int v0 = 62;
    int v1 = 76;
    int v2 = 97;
    int v3 = 48;
    int v4 = 77;
    int i;
    v3 = v3 - v2;
    v1 = v1 * 6;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v4;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = v3 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
