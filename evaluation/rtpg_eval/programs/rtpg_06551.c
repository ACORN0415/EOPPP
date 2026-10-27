int test_func(void) {
    int v0 = 26;
    int v1 = 40;
    int v2 = 55;
    int v3 = 8;
    int v4 = 33;
    int v5 = 41;
    int v6 = 56;
    int i;
    if (v3 > v4) { v3 = v4; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = v5 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
