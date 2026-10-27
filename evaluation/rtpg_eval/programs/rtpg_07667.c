int test_func(void) {
    int v0 = 73;
    int v1 = 63;
    int v2 = 51;
    int v3 = 25;
    int v4 = 4;
    int i;
    v2 = v2 - v1;
    v0 = v0 * 3;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
