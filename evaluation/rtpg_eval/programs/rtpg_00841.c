int test_func(void) {
    int v0 = 47;
    int v1 = 29;
    int v2 = 32;
    int v3 = 59;
    int i;
    if (v3 > v2) { v3 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
