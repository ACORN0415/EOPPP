int __arr_8066[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 29;
    int v2 = 92;
    int v3 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_8066[i] = v2 + i; }
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 18; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
