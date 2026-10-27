int __arr_1026[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 40;
    int v2 = 41;
    int v3 = 29;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_1026[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
