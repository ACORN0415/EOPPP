int test_func(void) {
    int v0 = 25;
    int v1 = 31;
    int v2 = 86;
    int v3 = 84;
    int v4 = 68;
    int i;
    if (v0 > v1) { v0 = v1; }
    v3 = v3 - v4;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
