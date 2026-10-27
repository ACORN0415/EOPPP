int test_func(void) {
    int v0 = 12;
    int v1 = 85;
    int v2 = 99;
    int v3 = 94;
    int v4 = 71;
    int v5 = 26;
    int i;
    v1 = 57;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = v5 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
