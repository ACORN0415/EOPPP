int test_func(void) {
    int v0 = 9;
    int v1 = 51;
    int v2 = 51;
    int v3 = 13;
    int v4 = 89;
    int v5 = 28;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
