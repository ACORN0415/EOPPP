int test_func(void) {
    int v0 = 86;
    int v1 = 5;
    int v2 = 45;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 & v1;
    return v0;
}
int main(void) { return test_func(); }
