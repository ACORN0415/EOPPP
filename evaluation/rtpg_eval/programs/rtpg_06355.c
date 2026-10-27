int test_func(void) {
    int v0 = 11;
    int v1 = 56;
    int v2 = 10;
    int v3 = 74;
    int v4 = 99;
    int i;
    v1 = 94;
    v3 = v3 - v4;
    v4 = v4 * 8;
    v2 = v2 / (v4 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
