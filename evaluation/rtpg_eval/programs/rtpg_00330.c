int test_func(void) {
    int v0 = 33;
    int v1 = 15;
    int v2 = 16;
    int v3 = 57;
    int i;
    if (v0 > v3) { v0 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
