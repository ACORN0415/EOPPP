int __arr_9576[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 57;
    int v2 = 36;
    int i;
    for (i = 0; i < 10; i++) { __arr_9576[i] = v1 + i; }
    v0 = 21;
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
