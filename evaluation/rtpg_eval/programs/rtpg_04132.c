int test_func(void) {
    int v0 = 28;
    int v1 = 80;
    int v2 = 19;
    int i;
    if (v1 > v2) { v1 = v2; }
    v0 = v0 * 4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
