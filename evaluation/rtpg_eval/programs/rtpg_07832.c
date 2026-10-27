int test_func(void) {
    int v0 = 62;
    int v1 = 75;
    int v2 = 19;
    int v3 = 67;
    int v4 = 26;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
