int __arr_4631[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 68;
    int v2 = 6;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_4631[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
