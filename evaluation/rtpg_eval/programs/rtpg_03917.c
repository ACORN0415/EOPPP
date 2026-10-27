int test_func(void) {
    int v0 = 71;
    int v1 = 71;
    int v2 = 81;
    int v3 = 66;
    int v4 = 74;
    int i;
    v1 = v1 + v3;
    v1 = v1 * 6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
