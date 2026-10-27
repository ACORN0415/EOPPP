int __arr_1025[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 57;
    int v2 = 62;
    int v3 = 35;
    int v4 = 94;
    int i;
    v1 = 60;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_1025[i] = v1 + i; }
    v0 = v0 - v4;
    return v0;
}
int main(void) { return test_func(); }
