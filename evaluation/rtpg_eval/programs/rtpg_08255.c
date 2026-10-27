int __arr_8255[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 49;
    int v2 = 57;
    int v3 = 96;
    int i;
    v3 = v3 * 5;
    for (i = 0; i < 10; i++) { __arr_8255[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }
