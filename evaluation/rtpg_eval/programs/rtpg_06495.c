int test_func(void) {
    int v0 = 11;
    int v1 = 55;
    int v2 = 20;
    int v3 = 16;
    int v4 = 39;
    int i;
    v0 = v0 * 8;
    v0 = v0 + v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
