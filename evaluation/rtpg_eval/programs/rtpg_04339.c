int test_func(void) {
    int v0 = 37;
    int v1 = 61;
    int v2 = 84;
    int v3 = 70;
    int i;
    v3 = v3 + v1;
    v3 = 54;
    if (v3 > v2) { v3 = v2; }
    v1 = v1 ^ v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
