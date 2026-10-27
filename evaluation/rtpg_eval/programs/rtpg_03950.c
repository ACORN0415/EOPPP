int test_func(void) {
    int v0 = 18;
    int v1 = 85;
    int v2 = 9;
    int v3 = 95;
    int v4 = 51;
    int i;
    v0 = v0 + v2;
    v3 = v3 * 8;
    if (v2 > v1) { v2 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 | v0;
    return v0;
}
int main(void) { return test_func(); }
