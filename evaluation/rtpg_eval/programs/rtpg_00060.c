int test_func(void) {
    int v0 = 78;
    int v1 = 17;
    int v2 = 80;
    int i;
    if (v1 > v2) { v1 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
