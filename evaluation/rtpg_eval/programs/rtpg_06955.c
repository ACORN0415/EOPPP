int __arr_6955[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 23;
    int v2 = 97;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 10; i++) { __arr_6955[i] = v0 + i; }
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
