int test_func(void) {
    int v0 = 1;
    int v1 = 15;
    int v2 = 3;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 + v1;
    v2 = v2 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
