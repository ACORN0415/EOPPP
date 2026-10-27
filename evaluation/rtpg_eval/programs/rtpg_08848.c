int test_func(void) {
    int v0 = 55;
    int v1 = 85;
    int v2 = 66;
    int v3 = 96;
    int v4 = 31;
    int i;
    v2 = v2 + v4;
    v0 = v0 * 4;
    v3 = v3 / (v0 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
