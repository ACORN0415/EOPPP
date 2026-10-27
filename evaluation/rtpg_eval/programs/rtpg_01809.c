int __arr_1809[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 94;
    int v2 = 6;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_1809[i] = v1 + i; }
    v2 = v2 + v0;
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
