int __arr_2067[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 61;
    int v2 = 97;
    int i;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_2067[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
