int test_func(void) {
    int v0 = 57;
    int v1 = 69;
    int v2 = 30;
    int v3 = 41;
    int i;
    if (v3 > v2) { v3 = v2; }
    v3 = v3 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
