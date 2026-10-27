int test_func(void) {
    int v0 = 8;
    int v1 = 76;
    int v2 = 5;
    int v3 = 68;
    int v4 = 10;
    int i;
    v0 = 44;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
