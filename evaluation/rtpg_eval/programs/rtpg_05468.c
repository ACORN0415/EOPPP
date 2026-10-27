int test_func(void) {
    int v0 = 78;
    int v1 = 73;
    int v2 = 54;
    int v3 = 75;
    int v4 = 95;
    int i;
    if (v1 > v3) { v1 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
