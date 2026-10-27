int test_func(void) {
    int v0 = 36;
    int v1 = 70;
    int v2 = 30;
    int v3 = 67;
    int v4 = 56;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
