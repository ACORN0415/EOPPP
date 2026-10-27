int __arr_9677[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 46;
    int v2 = 97;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_9677[i] = v1 + i; }
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
