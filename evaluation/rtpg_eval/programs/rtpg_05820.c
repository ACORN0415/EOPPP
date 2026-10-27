int test_func(void) {
    int v0 = 43;
    int v1 = 54;
    int v2 = 15;
    int v3 = 90;
    int v4 = 57;
    int v5 = 75;
    int i;
    v3 = v3 - v0;
    v0 = 5;
    if (v3 > v0) { v3 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
