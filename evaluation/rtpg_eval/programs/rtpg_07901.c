int __arr_7901[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 23;
    int v2 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_7901[i] = v1 + i; }
    if (v2 > v1) { v2 = v1; }
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }
