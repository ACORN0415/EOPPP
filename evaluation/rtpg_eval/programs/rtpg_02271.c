int test_func(void) {
    int v0 = 39;
    int v1 = 59;
    int v2 = 5;
    int v3 = 95;
    int i;
    v1 = v1 + v3;
    if (v1 > v3) { v1 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
