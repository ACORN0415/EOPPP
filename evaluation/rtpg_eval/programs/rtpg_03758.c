int __arr_3758[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 36;
    int v2 = 45;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_3758[i] = v1 + i; }
    v2 = v2 + v2;
    return v0;
}
int main(void) { return test_func(); }
