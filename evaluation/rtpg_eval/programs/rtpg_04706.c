int __arr_4706[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 90;
    int v2 = 61;
    int v3 = 60;
    int i;
    v3 = v3 + v1;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_4706[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
