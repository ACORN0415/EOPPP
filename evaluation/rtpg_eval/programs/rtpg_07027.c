int test_func(void) {
    int v0 = 32;
    int v1 = 100;
    int v2 = 28;
    int v3 = 51;
    int v4 = 79;
    int v5 = 80;
    int i;
    if (v5 > v2) { v5 = v2; }
    v3 = v3 * 4;
    v0 = v0 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
