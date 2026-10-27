int test_func(void) {
    int v0 = 31;
    int v1 = 84;
    int v2 = 22;
    int i;
    v2 = v2 * 6;
    if (v2 > v0) { v2 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
