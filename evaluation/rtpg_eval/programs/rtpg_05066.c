int test_func(void) {
    int v0 = 58;
    int v1 = 73;
    int v2 = 52;
    int v3 = 41;
    int v4 = 81;
    int i;
    v2 = v2 + v3;
    if (v0 > v2) { v0 = v2; }
    v4 = v4 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
