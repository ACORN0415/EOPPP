int __arr_6540[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 67;
    int v2 = 89;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_6540[i] = v2 + i; }
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 * 7;
    return v0;
}
int main(void) { return test_func(); }
