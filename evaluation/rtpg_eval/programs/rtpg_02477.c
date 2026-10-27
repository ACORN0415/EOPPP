int test_func(void) {
    int v0 = 73;
    int v1 = 12;
    int v2 = 33;
    int v3 = 4;
    int i;
    v2 = v2 + v2;
    if (v0 > v1) { v0 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
