int __arr_5561[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 52;
    int v2 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_5561[i] = v2 + i; }
    v0 = v0 + v1;
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
