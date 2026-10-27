int test_func(void) {
    int v0 = 7;
    int v1 = 35;
    int v2 = 6;
    int v3 = 92;
    int v4 = 9;
    int i;
    if (v1 > v0) { v1 = v0; }
    v0 = v0 * 9;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
