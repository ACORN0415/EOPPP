int test_func(void) {
    int v0 = 95;
    int v1 = 82;
    int v2 = 32;
    int v3 = 40;
    int v4 = 58;
    int v5 = 13;
    int i;
    v3 = 36;
    v4 = v4 % (v3 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
