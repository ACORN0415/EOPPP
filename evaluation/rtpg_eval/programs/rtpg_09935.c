int __arr_9935[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 46;
    int v2 = 8;
    int v3 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_9935[i] = v0 + i; }
    v0 = 41;
    return v0;
}
int main(void) { return test_func(); }
