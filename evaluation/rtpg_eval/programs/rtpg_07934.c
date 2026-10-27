int __arr_7934[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 18;
    int v2 = 30;
    int v3 = 43;
    int i;
    for (i = 0; i < 10; i++) { __arr_7934[i] = v0 + i; }
    for (i = 0; i < 19; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
